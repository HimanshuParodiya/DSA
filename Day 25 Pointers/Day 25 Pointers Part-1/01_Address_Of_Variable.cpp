#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    // cout<<num;

    // cout << "Address of num is " << &num << endl;

    //    1 // create a pointer

    int *ptr = &num;

    // cout << "without * " << ptr << endl; // without * it will print the address of num
    // cout << "with *ptr " << *ptr;        // with * it will print the value of num

    //    2 // null Pointer
    int num1 = 8;
    int *ptr2 = 0; // initializing Pointer with null
    ptr2 = &num1;  // now we can pass the address of variable

    //    3 // Copying a Pointer
    int num2 = 5;
    int *ptr3 = &num2;

    int *ptr4 = ptr3;
    // cout << *ptr3;
    cout << *ptr4;

    //    4 // Pointer Arithmetic
    int *ptr5 = &num;

    return 0;
}