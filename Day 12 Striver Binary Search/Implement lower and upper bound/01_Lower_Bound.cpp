#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {2, 3, 5, 7, 8, 9};
    int target = 8;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << start; // 4

    int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    cout << lb; // 4

    return 0;
}