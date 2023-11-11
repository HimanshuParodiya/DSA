#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 7};
    int target = 1;

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

    return 0;
}