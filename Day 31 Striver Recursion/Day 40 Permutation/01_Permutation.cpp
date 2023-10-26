#include <iostream>
#include <vector>

using namespace std;

void getPermute(vector<int> &nums, vector<vector<int>> &ans, vector<int> &subSets, int mappingPickedIndices[])
{
    if (subSets.size() == nums.size())
    {
        ans.push_back(subSets);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (!mappingPickedIndices[i])
        {
            subSets.push_back(nums[i]);
            mappingPickedIndices[i] = 1;
            getPermute(nums, ans, subSets, mappingPickedIndices);
            mappingPickedIndices[i] = 0;
            subSets.pop_back();
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> subSets;
    int mappingPickedIndices[nums.size()];

    for (int i = 0; i < nums.size(); i++)
        mappingPickedIndices[i] = 0;
    getPermute(nums, ans, subSets, mappingPickedIndices);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}