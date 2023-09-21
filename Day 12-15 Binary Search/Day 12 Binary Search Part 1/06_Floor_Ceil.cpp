#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int size = nums.size();

    int ans = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int ans1 = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

    if (ans >= size || nums[ans] != target)
    {               // ans >= size  means if size of array is 7 and we have get upper_bound of last index which is size + 1 so we handling error
        cout << -1; // Target not found in the vector
        cout << -1; // Target not found in the vector
    }

    cout << ans;
    cout << ans1;

    return 0;
}
