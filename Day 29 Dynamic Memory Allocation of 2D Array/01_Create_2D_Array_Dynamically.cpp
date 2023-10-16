#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter m : ";
    cin >> m;
    // creating 2D array
    int **arr = new int *[n]; // creating row

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m]; // creating col
    }

    // taking input for 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing output of 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // release/delete the memory

    for (int i = 0; i < n; i++) // delete all the col
    {
        delete[] arr[i];
    }

    delete[] arr; // delete all the row

    return 0;
}