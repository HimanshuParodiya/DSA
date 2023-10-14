#include <iostream>

using namespace std;

int main()
{
    // int *ptr = 0;
    int first = 6;
    // *ptr = first; // not working

    // we should do it like
    int *ptr = 0;
    ptr = &first; // this will work

    cout << first << endl;

    return 0;
}