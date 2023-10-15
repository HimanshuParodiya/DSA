#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{

    // creating variable size array
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    // variable size array

    int *arr = new int[n];

    // taking n input

    for (int i = 0; i < n; i++)
    {
        cout << i << " value : ";
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "Answer is " << ans;

    return 0;
}