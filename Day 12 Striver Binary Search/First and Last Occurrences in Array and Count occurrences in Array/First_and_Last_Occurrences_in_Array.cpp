#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//* brute force with the time complexity of O(n)

// int main()
// {

//     vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
//     int target = 8;
//     int first = -1;
//     int last = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == target)
//         {
//             if (first == -1)
//             {
//                 first = i;
//             }
//             last = i;
//         }
//     }

//     cout << "First occurrence is at index" << first << endl;
//     cout << "Last occurrence is at index" << last;

//     return 0;
// }

//* 1 stl  approach

// int main()
// {
//     vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
//     int target = 8;

//     int up = upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1; // - 1 to get last occurrence because upper bound will point last occurrence + 1
//     int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();

//     cout << "First occurrence is at index " << lb << endl;
//     cout << "Last occurrence is at index " << up;

//     return 0;
// }

// binary search approach

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int target = 7;

    // first occurrence

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // last occurrence

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (arr[start] != target)
    {
        cout << "First occurrence is at index " << -1 << endl;
        cout << "Last occurrence is at index " << -1;
    }
    else
    {
        cout << "First occurrence is at index " << start << endl;
        cout << "Last occurrence is at index " << low - 1;
    }

    return 0;
}

//  Time Complexity is 2logN (2 because there are 2 binary search)