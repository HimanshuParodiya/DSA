#include <iostream>
using namespace std;

// void reverseArray(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     while (end >= start)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (end >= start)
    {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        start++;
        end--;

        // explaination
        // arr[start] = 1
        // arr[end] = 10

        // arr[start] = 0001 ^ 1010
        // arr[start] = 1011

        // arr[end] = 1011 ^ 1010
        // arr[end] = 0001

        // arr[start] = 1011 ^ 0001
        // arr[start] = 1010
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

    reverseArray(myArray, sizeOfArray);
    printArray(myArray, sizeOfArray);

    return 0;
}