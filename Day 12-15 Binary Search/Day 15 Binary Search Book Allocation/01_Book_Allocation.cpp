// bool isPossible(vector<int> &arr, int n, int m, int mid)
// {

//     // initializing our student count to 1 and increasing it till m

//     int students = 1;

//     // pageSum will hold the no. of pages that can be assigned to 1 student

//     int pageSum = 0;

//     // running a loop for adding pages to the pageSum till it satisfies

//     // the condition of allocating all the books

//     for (int i = 0; i < n; i++)
//     {

//         // incrementing the no. of pages till it is less than mid

//         if (pageSum + arr[i] <= mid)
//         {

//             // basically adding array values to the pageSum variable till it satisfies

//             // the condition

//             pageSum += arr[i];
//         }
//         else
//         {

//             // now when the pageSum value is greater than mid

//             // now no more books can be assigned to that student

//             // so incrementing the student count

//             students++;

//             // if the student count is greater than m which was defined in problem

//             // or the no. of pages is greater than mid we will return false

//             // as in first condition we cannot have more students

//             // and in second condition we cannot assign more pages than mid

//             // as mid stores the max no. of pages that a student can have

//             if ((students > m) || arr[i] > mid)
//             {

//                 return false;
//             }

//             // else we will reinitialize the pageSum with the index value

//             // to store the books that can be alloted to next student

//             pageSum = arr[i];
//         }
//     }

//     // finally returning true if all the conditions satisfy

//     return true;
// }

// int findPages(vector<int> &arr, int n, int m)
// {

//     // when students are more than no. of books

//     if (m > n)
//         return -1;

//     int s = 0, sum = 0, ans = -1;

//     // calculating max no. of pages that can be alloted to a student

//     for (int i = 0; i < n; i++)
//     {

//         sum += arr[i];
//     }

//     // initializing end to max no. of pages so that we can run a binarysearch from s to e

//     int e = sum;

//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {

//         // if the answer can allocate the book

//         if (isPossible(arr, n, m, mid))
//         {

//             // we will store it and

//             ans = mid;

//             // move our end to mid as we need to find the minimum element

//             e = mid;
//         }
//         else
//         {

//             // if our answer not resides within that range definately our answer will be

//             // a larger value so we will move our start to mid+1

//             s = mid + 1;
//         }

//         mid = s + (e - s) / 2;
//     }

//     // it will finally return the answer that will hold the maximum pages

//     // that can be alloted to the students is minimum

//     return ans;
// }

#include <iostream>
#include <vector>
using namespace std;

int getTotalPages(vector<int> arr)
{
    int totalPages = 0;
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        totalPages += arr[i];
    }

    return totalPages;
}

bool isPossibleSoluation(vector<int> &arr, int n, int m, int mid)
{
    int studentCount = 1; // giving to fist student
    int pageSum = 0;      // right now student 1 have 0 pages

    for (int i = 0; i < n; i++)
    {

        if (pageSum + arr[i] <= mid)
        {                      // adding page and checking if it is equal or less than mid
            pageSum += arr[i]; // adding page for student
        }
        else
        {
            studentCount++; // in above if when pages will be more than mid than we will start from there to give it to next studen
            if ((studentCount > m) || (arr[i] > mid))
            { // if books remain or if current page is more than mid
                return false;
            }
            pageSum = arr[i]; // next's students first page
        }
    }

    return true;
}

int binarySearch(vector<int> &arr, int n, int m, int pages)
{
    int start = 0;
    int end = pages;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSoluation(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int findPages(vector<int> &arr, int n, int m)
{
    // Write your code here.
    if (m > n)
    { // when students are more than no. of books
        cout << "we do not have enough books sorry";
        return -1;
    }
    int pages = getTotalPages(arr);
    int ans = binarySearch(arr, n, m, pages);
    // cout << ans;
    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int totalBooks = 4;
    int totalStudents = 6;
    int ans = findPages(arr, totalBooks, totalStudents);
    cout << ans;

    return 0;
}