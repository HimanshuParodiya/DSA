#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int start = 0;
    int i = 0;
    int alternateValue = 1;

    while (alternateValue <= size)
    {
        arr[start] = arr[start] ^ arr[alternateValue];
        arr[alternateValue] = arr[start] ^ arr[alternateValue];
        arr[start] = arr[start] ^ arr[alternateValue];
        i++;
        start += 2;
        alternateValue += 2;
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
    int myArray[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

    swapAlternate(myArray, sizeOfArray);
    printArray(myArray, sizeOfArray);

    return 0;
}