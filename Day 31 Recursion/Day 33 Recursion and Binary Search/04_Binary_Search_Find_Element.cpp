#include <iostream>
#include <vector>

using namespace std;

//* traditional binary search using while loop

// int main()
// {
//     vector<int> nums = {2, 4, 6, 8, 10, 14, 16};
//     int target = 24;

//     int start = 0;
//     int end = nums.size();

//     while (start < end)
//     {
//         int mid = start + (end - start) / 2;

//         if (nums[mid] == target)
//         {
//             cout << "We find the target at index " << mid;
//             break;
//         }

//         if (nums[mid] < target)
//         {
//             start = mid + 1; // Adjust the start index
//         }
//         else
//         {
//             end = mid - 1; // Adjust the end index
//         }
//     }

//     if (start > end)
//     {
//         cout << "We couldn't find the target";
//     }

//     return 0;
// }

//* Binary search with recursion

bool binarySearch(vector<int> &nums, int start, int end, int target)
{
    if (start > end)
    {
        return false; // target is not found
    }
    int mid = start + (end - start) / 2;

    if (nuns[mid] == target)
    {
        return true;
    }

    if (nums[mid] < target)
    {
        return binarySearch(nums, mid + 1, end, target);
    }
    if (nums[mid] < target)
    {
        return binarySearch(nums, start, mid - 1, target);
    }
}

int main()
{
    vector<int> nums = {2, 4, 6, 8, 10, 14, 16};
    int target = 14;
    int start = 0;
    int end = nums.size();

    bool ans = binarySearch(nums, start, end, target);
    cout << boolalpha << ans;
    return 0;
}