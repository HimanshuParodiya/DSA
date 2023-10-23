#include <iostream>
#include <vector>

using namespace std;

int sumOfArray(vector<int> &nums, int sum, int index)
{
    if (index == nums.size())
    {
        return sum;
    }
    sum += nums[index];
    return sumOfArray(nums, sum, index + 1);
}

int main()
{
    vector<int> nums = {3, 2, 5, 1, 6};
    int sum = 0;
    int index = 0;
    int size = nums.size();

    int ans = sumOfArray(nums, sum, index);
    cout << ans;
    return 0;
}
