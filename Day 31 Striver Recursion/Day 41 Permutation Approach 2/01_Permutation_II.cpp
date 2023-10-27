#include <iostream>
#include <vector>

using namespace std;
void getPermute(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {                        // if index become == nums.size() means we have swapped every element at every level for each recursion call
        ans.push_back(nums); // after swapping happen and recursion meet the base case push the nums to ans
        return;              // and return
    }

    // Iterate through the remaining elements, swapping them with the current element
    for (int i = index; i < nums.size(); i++)
    {
        // Swap the current element with the element at index i
        swap(nums[index], nums[i]);

        // Recurse to generate permutations with the current swapped element
        getPermute(nums, ans, index + 1);

        // Backtrack by swapping the elements back to their original positions
        swap(nums[index], nums[i]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;      // array to store all the permutation
    int index = 0;                // index to swap nums[index] with nums[i]
    getPermute(nums, ans, index); // function call

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