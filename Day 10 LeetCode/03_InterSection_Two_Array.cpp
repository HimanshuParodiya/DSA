#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void findInterSection(vector<int> arr1, vector<int> arr2)
// {
// sort the vector
//     sort(arr1.begin(), arr1.end()); // now arr1 = {1,2,3,4,5,6}
//     sort(arr2.begin(), arr2.end()); // now arr2 = {2,4,6,7}
//     int i = 0;
//     int j = 0;
//     while (i < arr1.size() && j < arr2.size())
//     {
//         if (arr1[i] == arr2[j])
//         {
//             cout << arr1[i];
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
// }
vector<int> findInterSection(vector<int> arr1, vector<int> arr2)
{
    vector<int> interSection; // initialize vector;
    // sort the vector
    sort(arr1.begin(), arr1.end()); // now arr1 = {1,2,3,4,5,6}
    sort(arr2.begin(), arr2.end()); // now arr2 = {2,4,6,7}
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] == arr2[j]) // if both element matches
        {
            interSection.push_back(arr1[i]); // push it to our new vector
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) // let say arr1[0] < arr2[0] = 1 < 2 ? now there is no need to further iteration beacuse it will not match (we already sorted our vector)
        {
            i++; // increase i
        }
        else
        {
            j++; // let say arr1[2] > arr2[0] = 3 > 2 ? now there is no need to further iteration beacuse it will not match (we already sorted our vector)
        }
    }
    return interSection; // return our new array
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4, 5, 6};
    vector<int> arr2 = {6, 7, 2, 8, 4, 9, 2};

    vector<int> intersection = findInterSection(arr1, arr2);

    for (int nums : intersection)
    {
        cout << nums << " ";
    }

    return 0;
}