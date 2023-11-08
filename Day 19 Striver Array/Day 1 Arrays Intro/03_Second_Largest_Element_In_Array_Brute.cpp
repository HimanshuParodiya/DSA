#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {3, 1, 6, 8, 5};

    sort(arr, arr + 5);

    cout << arr[3];

    return 0;
}

// Time complexity is O(N lonN)