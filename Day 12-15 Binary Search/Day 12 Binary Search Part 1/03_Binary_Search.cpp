#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    // instead of above method of finding the mid value we can use mid = start + (end - start)/2 because with above method if the length of start and end will be 2^31-1 then the mid value can exceed the int range
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // cout << arr[mid] << " ";
        if (arr[mid] == key)
        {
            return arr[mid];
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr1[6] = {1, 2, 45, 67, 68, 98};
    int arr2[5] = {1, 2, 5, 7, 9};
    int arr3[] = {1, 2, 3, 4, 6, 43, 45, 57, 98, 878, 889};

    int sizeOfArray = sizeof(arr1) / sizeof(arr1[0]);
    int sizeOfArray2 = sizeof(arr2) / sizeof(arr2[0]);
    int sizeOfArray3 = sizeof(arr3) / sizeof(arr3[0]);

    int ansArr1 = binarySearch(arr1, sizeOfArray, 98);
    int ansArr2 = binarySearch(arr2, sizeOfArray2, 2);
    int ansArr3 = binarySearch(arr3, sizeOfArray3, 57);

    if (ansArr1 > 0)
    {
        cout << ansArr1 << " Present" << endl;
    }
    else
    {
        cout << ansArr1 << " Not Present" << endl;
    }
    if (ansArr2 > 0)
    {
        cout << ansArr2 << " Present" << endl;
    }
    else
    {
        cout << ansArr2 << " Not Present" << endl;
    }
    if (ansArr3 > 0)
    {
        cout << ansArr3 << " Present" << endl;
    }
    else
    {
        cout << ansArr3 << " Not Present" << endl;
    }

    return 0;
}