#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int myArray[10000];
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << "th value of an array: " << endl;
        cin >> myArray[i];
    }

    int sum = sumOfArray(myArray, size);
    cout << sum;

    return 0;
}