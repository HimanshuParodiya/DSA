#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    // count all the numbers that are smaller than pivot
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at correct place
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // satisfy condition <a |a| >a
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end) // if array size of weather 1 or 0 it is sorted
    {
        return;
    }

    // partition
    int index = partition(arr, start, end);

    // sort left part of partition
    quickSort(arr, start, index - 1);
    // sort right part of partition
    quickSort(arr, index + 1, end);
}
int main()
{
    int arr[] = {2, 4, 1, 6, 9};
    int n = 5;
    int start = 0;
    quickSort(arr, start, n - 1);

    cout << "{ ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[n - 1];
    cout << " }";

    return 0;
}

// Time complexity O(nlogn)
// Space complexity O(n)

// worst case complexity is O(n^2)