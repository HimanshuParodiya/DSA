#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            break;
        }
        else if (arr[mid] > target)
        {
            if (arr[start] <= target && arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    cout << start;

    return 0;
}