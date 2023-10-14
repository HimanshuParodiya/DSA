#include <iostream>
using namespace std;

int main()
{

    // int a = 6;
    // int b = 4;
    // int *ptr = &a;
    // (*ptr)++;
    // *ptr = b;

    // cout << b;
    // cout << *ptr << " " << a << " " << b;

    int *ptr1 = 0;
    int a = 10;
    *ptr1 = a;
    // cout << *ptr1 << endl; // it will give error because *ptr1 is assigned with 0 to correct it we can use NULL instead of 0

    // int arr[] = {1, 2, 3, 4};
    // cout << *(arr);

    int arr[] = {1, 2, 3, 4};
    int *p = arr + 1;
    cout << *arr + 9;

    return 0;
}