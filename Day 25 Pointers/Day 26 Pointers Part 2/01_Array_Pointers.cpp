#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 5, 3, 4, 5, 6, 7, 8, 9, 10};

    // cout << arr; // address of 1st element in an array
    // cout << &arr[0]; // address of 1st element in an array
    // cout << &arr[2]; // address of 2nd(address of 1st + 4 (in hexadecimal format)) element in an array
    // cout << *arr;

    int *ptr = arr;
    // *ptr++; // with this it will print 5 because ++ is first then *ptr
    (*ptr)++; // with this it will print 5 because here *ptr first then ++
    cout << *ptr;

    return 0;
}