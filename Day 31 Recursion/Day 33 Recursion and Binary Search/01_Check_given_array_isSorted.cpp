#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int nums, int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (nums[0] > nums[1])
    {
        return false;
    }
    else
    {
        bool remainingArray = isSorted(nums + 1, size - 1); // passing the arr from pointer + 1.
        // if i pass initially 4,6,7,8,12 and size is 5
        // next time arr will be 6,7,8,12 and size is 4
        // next time arr will be 7,8,12 and size is 3
        // next time arr will be 8,12 and size is 2
        // next time arr will be 8,12 and size is 1
        // base case when size is 1 return true
    }
}

int main()
{
    int nums[] = {4, 6, 7, 8, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    bool result = isSorted(nums, size);
    cout << boolalpha << result;

    return 0;
}