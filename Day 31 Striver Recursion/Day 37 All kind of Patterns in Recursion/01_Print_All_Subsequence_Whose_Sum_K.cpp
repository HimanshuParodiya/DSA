#include <iostream>
#include <vector>
using namespace std;

void getSubsequence(vector<int> &nums, int target, int index, int sum, vector<int> &subSequence)
{

    if (index >= nums.size())
    {
        if (sum == target)
        {
            for (auto &&it : subSequence)
            {
                cout << it << " ";
            }
        }
        return;
    }

    subSequence.push_back(nums[index]);
    sum += nums[index];

    getSubsequence(nums, target, index + 1, sum, subSequence);

    sum -= nums[index];
    subSequence.pop_back();

    getSubsequence(nums, target, index + 1, sum, subSequence);
}

int main()
{
    vector<int> nums = {3, 5, 6, 7};
    int target = 9;
    int size = nums.size();
    int sum = 0;
    int index = 0;
    vector<int> subSequence;
    getSubsequence(nums, target, index, sum, subSequence);

    return 0;
}
