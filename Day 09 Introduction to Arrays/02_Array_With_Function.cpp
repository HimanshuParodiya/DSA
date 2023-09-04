#include <iostream>
using namespace std;

void printIntArray(int givenArray[], int sizeOfArray)
{

    // int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    // cout << givenArray; // it is pointer pointing to its address (within the function, givenArray is actually a pointer, not an array. ) so we can define sizeOfArray here (sizeof(givenArray) will return the size of a pointer, which is typically 4 or 8 bytes depending on your system, and not the size of the original array.)
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << givenArray[i] << " ";
    }
    cout << endl;
}
void printCharArray(char givenArray[], int sizeOfArray)
{

    // int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    // cout << givenArray; // it is pointer pointing to its address (within the function, givenArray is actually a pointer, not an array. ) so we can define sizeOfArray here (sizeof(givenArray) will return the size of a pointer, which is typically 4 or 8 bytes depending on your system, and not the size of the original array.)
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << givenArray[i] << " ";
    }
}

int main()
{

    int myArray[15];
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

    fill_n(myArray, 15, 2);
    printIntArray(myArray, sizeOfArray);

    char ch[5] = {'a', 'e', 'i', 'o', 'u'};
    int sizeOfChArray = sizeof(ch) / sizeof(ch[0]);
    printCharArray(ch, sizeOfChArray);

    return 0;
}