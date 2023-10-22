#include <iostream>
#include <vector>
using namespace std;

int getSubsequence(vector<int> &nums, int target, int index, int sum)
{

    if (index >= nums.size())
    {
        if (sum == target)
        {
            return 1;
        }
        else
            return 0;
    }

    sum += nums[index];

    int l = getSubsequence(nums, target, index + 1, sum);

    sum -= nums[index];

    int r = getSubsequence(nums, target, index + 1, sum);

    return l + r;
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int target = 2;
    int size = nums.size();
    int sum = 0;
    int index = 0;
    int ans = getSubsequence(nums, target, index, sum);
    cout << ans;

    return 0;
}
