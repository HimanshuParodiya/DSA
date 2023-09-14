#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &nums, int threshold, int mid)
{
    int totalDivideValue = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        totalDivideValue += nums[i] / mid;
    }
    if (totalDivideValue > threshold)
    {
        return false;
    }

    return true;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
    int totalRange = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        totalRange += nums[i];
    }
    int start = 0;
    int end = totalRange;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << mid << endl;

        if (isPossible(nums, threshold, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {44, 22, 33, 11, 1};
    int threshold = 5;
    int ans = smallestDivisor(nums, threshold);
    cout << ans;
    return 0;
}
