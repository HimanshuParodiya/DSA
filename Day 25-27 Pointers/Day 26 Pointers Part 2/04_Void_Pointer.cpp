#include <iostream>
using namespace std;

int main()
{
    int int_var = 63;
    char char_var = 'f';

    void *ptr = &int_var;

    ptr = &char_var;

    cout << ptr;

    return 0;
}

//  it's a generic pointer that can point to data of any data type. The term "void" here signifies the absence of a specific type, making it a flexible and generic way to work with memory addresses.

// Void pointers are primarily used for memory management and for building more flexible and generic data structures and functions. Let's delve deeper into why and how they are used: