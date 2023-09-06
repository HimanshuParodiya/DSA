#include <iostream>
#include <algorithm>
using namespace std;

void allDuplicates(int arr[], int size)
{

    int duplicatesArray[size] = {0};   // create new array (not needed)
    sort(arr, arr + size);             // sort in increasing order
    for (int i = 0; i < size - 1; i++) // looping to size-1
    {
        if (arr[i] == arr[i + 1]) // if current element is equal to next element then it is duplicate
        {
            duplicatesArray[i] = arr[i]; // adding that element to new array (This new array is not needed in our case)
            cout << arr[i] << " ";       // printing the ducplicates
        }
    }
}

int main()

{
    int myArray[] = {4, 3, 2, 7, 8, 2, 3, -1, 1};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    allDuplicates(myArray, sizeOfArray);
    return 0;
}
