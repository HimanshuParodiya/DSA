#include <iostream>
#include <vector>
using namespace std;

bool findElement(vector<int> &nums, int index, int target)
{
    if (index >= nums.size())
    {
        return false;
    }

    if (nums[index] == target)
    {
        return true;
    }

    return findElement(nums, index + 1, target);
}
int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 2;
    int index = 0;

    bool isFound = findElement(nums, index, target);

    cout << boolalpha << isFound;

    return 0;
}