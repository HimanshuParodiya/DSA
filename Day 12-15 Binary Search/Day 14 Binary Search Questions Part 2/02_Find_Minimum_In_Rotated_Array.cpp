#include <iostream>
#include <vector>
using namespace std;

int getMinimum(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // if array is shorted
        if (arr[start] <= arr[end])
        {
            return arr[start];
        }

        // if array is rotated
        if (arr[start] >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    // if array has 1 value

    if (arr[start] <= arr[end])
    {
        return arr[start];
    }

    // if item is not present
    return -1;
}

int main()
{

    vector<int> myVector = {11, 12, 13, 14, 15};
    int ans = getMinimum(myVector);

    cout << ans;

    return 0;
}