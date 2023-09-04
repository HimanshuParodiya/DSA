#include <iostream>
using namespace std;

bool findElement(int num, int arr[], int size)
{
    bool present = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            present = true;
            return present;
        }
    }

    return present;
}

int main()
{
    int myArray[10] = {24, 34, 5, 643, 432, 56, 132, 435, 6, 1};
    // find whether 1 is present or not
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    cout << boolalpha << findElement(1, myArray, sizeOfArray);

    return 0;
}