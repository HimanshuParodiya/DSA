#include <iostream>
using namespace std;

int main()
{

    // int array

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = {'a', 'b', 'c', 'd', 'e'};

    cout << ch << endl;  // abcde
    cout << arr << endl; // address 0x61fefc

    char *ptr = &ch[0];
    cout << ptr << endl; // it will print entire array (in case of int array address will print not in char)

    char ch2 = 'a';

    char *ptr2 = &ch2;
    cout << ptr2; // print entire array of char

    return 0;
}