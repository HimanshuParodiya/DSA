#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 5, 7, 8, 9};
    int target = 7;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << start;

    int up = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    cout << up;

    return 0;
}