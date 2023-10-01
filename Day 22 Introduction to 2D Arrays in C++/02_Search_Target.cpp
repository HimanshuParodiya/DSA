#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                cout << arr[row][col] << " ";
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    // input 2D array
    int arr[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print 2D array

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}