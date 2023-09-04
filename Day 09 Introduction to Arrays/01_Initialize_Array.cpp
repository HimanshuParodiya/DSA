#include <iostream>
using namespace std;

int main()
{
    // int myArray[5] = {1};
    // cout << myArray[3]; // right now the 0th value is 1 and rest is 0, but we want that all element should be 1 so for that we can use fill_n

    int myArray[5];
    fill_n(myArray, 5, 4);
    cout << myArray[2]; // now every element is 4

    return 0;
}
