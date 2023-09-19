#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = arr.size();

    // is already Sorted
    bool isSorted = false;

    for (int i = 1; i < n; i++) // controls the number of passes.
    {
        for (int j = 0; j < n - i; j++) // When i = 1, the inner loop goes up to n - 1. In the next iteration, the largest element is already in its correct position, so there's no need to compare it. When i = 2, the inner loop goes from 0 to n - 2
        {
            if (arr[j] > arr[j + 1]) // compare current element with the next element.
            {
                swap(arr[j], arr[j + 1]); // Swap them if the current element is greater.
                isSorted = true;          // for 1st round if any element swapped that mean array is not sorted then the time complexity will be O(n^2)
            }
        }

        if (!isSorted) // if this runs in first time then this is best case with time complexity of O(n)
        {
            cout << "Already Sorted ";
            break;
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) // Print the sorted elements
    {
        cout << arr[i] << " ";
    }

    return 0;
}
