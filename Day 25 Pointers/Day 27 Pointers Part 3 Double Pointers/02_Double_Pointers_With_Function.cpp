#include <iostream>
using namespace std;

void update(int **double_Ptr)
{

    // which one will work ?
    // double_Ptr = double_Ptr + 1; // this one was not working even with with single pointer

    // *double_Ptr = *double_Ptr + 1; // this will work with single pointer not with double pointer because it will update ptr not i(* will go 1 level up to meet ptr)

    **double_Ptr = **double_Ptr + 1; // this will work with double pointer because it will update i(** will go 1 level up to meet ptr and then again will go 1 level up and meet i04)
}

int main()
{

    int i = 5;
    int *ptr = &i;
    int **double_Ptr = &ptr;

    cout << i << endl;
    cout << **double_Ptr << endl;
    cout << *ptr << endl;

    update(double_Ptr);

    cout << i << endl;
    cout << **double_Ptr << endl;
    cout << *ptr << endl;

    return 0;
}