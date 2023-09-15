#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int lsum = 0;
    int rsum = 0;
    for (auto el : nums)
    {
        rsum += el;
    };
    int pivot = -1;
    for (int i = 0; i < n; i++)
    {
        rsum -= nums[i];
        if (rsum == lsum)
        {
            return i;
        }
        lsum += nums[i];
    }
    return pivot;
}

int main()
{
    vector<int> myVector = {1, 7, 3, 6, 5, 6};

    int ans = pivotIndex(myVector);
    cout << ans;

    return 0;
}