#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 1, 5, 2};
    sort(arr, arr + 5); // Correct the sort function call

    // The largest element in the sorted array is at arr[4]
    cout << arr[4];

    return 0;
}

// Time complexity is O(N logN)