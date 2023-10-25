#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// brute force approach

// void getSubSets(vector<int> &nums, int index, vector<int> &subSet, set<vector<int>> &ans)
// {
//     if (index >= nums.size())
//     {
//         ans.insert(subSet);
//         return;
//     }

//     // Include the current element
//     subSet.push_back(nums[index]);
//     getSubSets(nums, index + 1, subSet, ans);
//     subSet.pop_back();

//     // Exclude the current element
//     getSubSets(nums, index + 1, subSet, ans);
// }
// int main()
// {

//     vector<int> nums = {1, 2, 2};
//     vector<int> subSet;
//     set<vector<int>> ans;

//     sort(nums.begin(), nums.end()); // Sort to handle duplicates ; it will sort the subset so there will be no duplicates like [2,2,3] and [3,2,2]

//     getSubSets(nums, 0, subSet, ans);

//     for (const auto &subset : ans)
//     {
//         for (int num : subset)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// * optimize approach

void getSubSets(vector<int> &nums, int index, vector<int> &subSet, vector<vector<int>> &ans)
{
    ans.push_back(subSet);

    for (int i = index; i < nums.size(); i++)
    {
        if (i != index && nums[i] == nums[i - 1])
        {
            // This condition checks if the current element (nums[i]) is a duplicate of the previous element (nums[i - 1]) and if it's not the first element (i > index). If all these conditions are met, the continue statement is executed, which means the current iteration of the loop is skipped.
            continue; // Skip duplicates to avoid duplicate subsets
        }

        subSet.push_back(nums[i]);
        getSubSets(nums, i + 1, subSet, ans);
        subSet.pop_back();
    }
}

int main()
{

    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans;
    vector<int> subSet;

    sort(nums.begin(), nums.end()); // Sort to handle duplicates

    getSubSets(nums, 0, subSet, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}