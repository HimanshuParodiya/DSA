#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> nums = {10, 9, 8, 7, 6};
    int k = 2;
    int s = k + 1;
    int e = nums.size() - 1;

    while (e >= s)
    {
        swap(nums[s], nums[e]);
        // cout << nums[s];
        // cout << nums[e];
        s++;
        e--;
    }

    for (int m = 0; m < nums.size(); m++)
    {
        cout << nums[m] << " ";
    }

    return 0;
}