#include <iostream>
#include <vector>
using namespace std;

// finding the last position of an element
int firstPosition(vector<int> arr, int size, int target)
{
    int start = 0;                // starting index
    int end = size - 1;           // last index
    int mid = (start + end) >> 1; // mid index
    int ans = -1;                 // initial value
    while (start <= end)
    {
        if (arr[mid] == target)
        {                  // if element(arr[mid]) === target
            ans = mid;     // pass the index to ans variable
            end = mid - 1; // now check, the index we got above do we have any same element before that index
        }
        else if (arr[mid] < target)
        {                    // if element is smaller than target then check after that element
            start = mid + 1; // increment the start
        }
        else
        {
            end = mid - 1; // if element is bigger than target then check befor that element
        }

        mid = (start + end) >> 1; // get new value of mid
    }

    return ans;
}

// finding the last position of an element
int lastPosition(vector<int> arr, int size, int target)
{
    int start = 0;                       // starting index
    int end = size - 1;                  // last index
    int mid = start + (end - start) / 2; // mid index
    int ans = -1;                        // initial value
    while (start <= end)
    {
        if (arr[mid] == target)
        {                    // if element(arr[mid]) === target
            ans = mid;       // pass the index to ans variable
            start = mid + 1; // now check, the index we got above do we have any same element after that index
        }
        else if (arr[mid] < target)
        {                    // if element is smaller than target then check after that element
            start = mid + 1; // increment the start
        }
        else
        {
            end = mid - 1; // if element is bigger than target then check befor that element
        }

        mid = start + (end - start) / 2; // get new value of mid
    }

    return ans;
}

// vector<int> firstAndLastPosition(int firstPosition, int secondPosition)
// {
//     return {firstPosition, secondPosition};
// }

int main()
{
    vector<int> myVector = {5, 7, 7, 8, 8, 10};
    int size = myVector.size();
    int key = 8;
    // int firstPositionValue = firstPosition(myVector, size, key);
    // int secondPositionValue = lastPosition(myVector, size, key);

    vector<int> ans = {firstPosition(myVector, size, key), lastPosition(myVector, size, key)};
    // vector<int> ans = firstAndLastPosition(firstPositionValue, secondPositionValue);

    // priniting out the position
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

// approach
// 1) Find first position of key.
// 2) After getting the key store the value in a variable.
// 3) Now check towards start that if there is also a same to if yes store it in same varible of (2)
// 4) Now find the last position of key
// 5) After getting the key store the value in a variable.
// 6) Now check towards end that if there is also a same to if yes store it in same varible of (5)