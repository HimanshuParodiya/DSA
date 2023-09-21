#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {2, 4, 6, 7, 8, 9};
    int target = 6;
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // cout << ans;

    // if we are giving coding round we dont have to write all this code we can simple use lower_bound
    int hb = upper_bound(arr.begin(), arr.end(), target) - arr.begin(); // it will give smallest high number then target
    cout << hb;

    return 0;
}
