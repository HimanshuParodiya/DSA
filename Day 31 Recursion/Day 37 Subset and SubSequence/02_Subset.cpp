#include <iostream>
#include <vector>
using namespace std;

void getSubSets(vector<int> &nums, vector<int> &subSet, vector<vector<int>> &ans, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(subSet);
        return;
    }
    getSubSets(nums, subSet, ans, index + 1);
    subSet.push_back(nums[index]);
    getSubSets(nums, subSet, ans, index + 1);
    subSet.pop_back();
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> subSet;
    int index = 0;

    getSubSets(nums, subSet, ans, index);

    cout << "{ ";
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " { ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "},";
        cout << endl;
    }
    cout << "}";

    return 0;
}

// maintaining order of output
// #include <iostream>
// #include <vector>
// using namespace std;

// void getSubSets(vector<int> &nums, vector<int> &subSet, vector<vector<int>> &ans, int index)
// {
//     if (index < 0)
//     {
//         ans.push_back(subSet);
//         return;
//     }
//     getSubSets(nums, subSet, ans, index - 1);
//     subSet.push_back(nums[index]);
//     getSubSets(nums, subSet, ans, index - 1);
//     subSet.pop_back();
// }

// int main()
// {
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> ans;
//     vector<int> subSet;
//     int index = nums.size() - 1;

//     getSubSets(nums, subSet, ans, index);

//     cout << "{ ";
//     cout << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << " { ";
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << "},";
//         cout << endl;
//     }
//     cout << "}";

//     return 0;
// }