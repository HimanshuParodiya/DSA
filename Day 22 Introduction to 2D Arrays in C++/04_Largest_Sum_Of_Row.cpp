#include <iostream>
#include <climits> //
using namespace std;

int largestRow(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        if (maxi < sum)
        {
            maxi = sum;
            rowIndex = row;
        }

        cout << "Sum of " << row << "th row is " << sum << " " << endl;
    }

    return rowIndex;
}

int main()
{

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

    int ans = largestRow(arr, 3, 4);
    cout << "Largest Row is " << ans;

    return 0;
}