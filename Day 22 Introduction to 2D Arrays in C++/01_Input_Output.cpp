#include <iostream>
using namespace std;

int main()
{

    // input and output for 1D array ------------------------------------------------------------------
    // int arr[5];
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // input and output for 2D array--------------------------------------------------------------------

    // row wise input output

    // int arr[4][3];

    // for (int i = 0; i < 4; i++) // input
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < 4; i++) // output
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // col wise input output

    int arr[4][3];

    for (int i = 0; i < 3; i++) // input
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j][i];
        }
    }
    for (int i = 0; i < 4; i++) // output
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[i] = " << arr[i] << "arr[j] = " << arr[j] << " " << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}