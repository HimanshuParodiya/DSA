#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 1, 3, 4};
    int pair = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        {
            pair++;
        }
    }

    if (nums[(nums.size() - 1)] > nums[0])
    {
        pair++;
    }

    if (pair <= 1)
    {
        cout << boolalpha << true;
    }
    else
    {
        cout << boolalpha << false;
    }

    return 0;
}

// There should be one pair in rotated sorted array

// when nums[i-1] > nums[i] means rotated part of array start of we get i pair
// when nums[0] < nums[n-1] means given array is not sorted