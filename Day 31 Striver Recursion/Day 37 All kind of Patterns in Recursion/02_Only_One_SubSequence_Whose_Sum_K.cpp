#include <iostream>
#include <vector>
using namespace std;

bool getSubsequence(vector<int> &nums, int target, int index, int sum, vector<int> &subSequence)
{

    if (index >= nums.size())
    {
        if (sum == target)
        {
            for (auto &&it : subSequence)
            {
                cout << it << " ";
            }
            return true;
        }
        else
            return false;
    }

    subSequence.push_back(nums[index]);
    sum += nums[index];

    if (getSubsequence(nums, target, index + 1, sum, subSequence) == true)
    {
        return true;
    };

    sum -= nums[index];
    subSequence.pop_back();

    if (getSubsequence(nums, target, index + 1, sum, subSequence) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int target = 2;
    int size = nums.size();
    int sum = 0;
    int index = 0;
    vector<int> subSequence;
    getSubsequence(nums, target, index, sum, subSequence);

    return 0;
}

// here we just want to print only one subsequent whose sum is k