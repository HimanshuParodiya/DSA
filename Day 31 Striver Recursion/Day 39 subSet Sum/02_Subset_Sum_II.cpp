#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// brute force approach

void getSubSets(vector<int> &nums, int index, vector<int> &subSet, set<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.insert(subSet);
        return;
    }

    // Include the current element
    subSet.push_back(nums[index]);
    getSubSets(nums, index + 1, subSet, ans);
    subSet.pop_back();

    // Exclude the current element
    getSubSets(nums, index + 1, subSet, ans);
}
int main()
{

    vector<int> nums = {1, 2, 2};
    vector<int> subSet;
    set<vector<int>> ans;

    sort(nums.begin(), nums.end()); // Sort to handle duplicates ; it will sort the subset so there will be no duplicates like [2,2,3] and [3,2,2]

    getSubSets(nums, 0, subSet, ans);

    for (const auto &subset : ans)
    {
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
