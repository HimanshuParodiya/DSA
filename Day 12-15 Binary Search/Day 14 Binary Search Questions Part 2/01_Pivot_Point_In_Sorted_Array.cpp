#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int start, int end, int key)
{
    int size = arr.size();
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
            // cout << mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int getPivot(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (nums[mid] >= nums[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    // vector<int> myVector = {7, 9, 10, 2, 3, 64, 456, 644, 733, 755, 855, 888};
    vector<int> myVector = {3, 1};

    int key = 1;

    int ans = getPivot(myVector);
    // cout << ans;

    // to check which side i have to use binary search
    if (myVector[ans] <= key && key <= myVector[myVector.size() - 1])
    {
        cout << binarySearch(myVector, ans, myVector.size() - 1, key);
    }
    else
    {

        cout << binarySearch(myVector, 0, ans - 1, key);
    }

    return 0;
}
