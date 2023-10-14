#include <iostream>

using namespace std;

int main()
{
    int first = 6;
    int *ptr = &first;

    cout << (*ptr)++;      // 6 due to post increment
    cout << first << endl; // 7

    return 0;
}