#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 1, 5, 2};
    int longest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > longest)
        {
            longest = arr[i];
        }
    }

    cout << longest;
    return 0;
}

// time complexity is O(n)