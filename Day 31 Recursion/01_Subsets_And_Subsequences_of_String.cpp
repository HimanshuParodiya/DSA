#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    // Start with an empty subset
    ans.push_back({});

    // Iterate through the elements in the input vector
    for (int i = 0; i < n; i++)
    {
        // Get the current size of the result
        int currentSize = ans.size();

        // Iterate through the existing subsets
        for (int j = 0; j < currentSize; j++)
        {
            // Create a new subset by copying an existing one
            vector<int> temp = ans[j];

            // Add the current element to the new subset
            temp.push_back(nums[i]);

            // Add the new subset to the result
            ans.push_back(temp);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl; // Print a newline to separate subsets
    }

    return 0;
}