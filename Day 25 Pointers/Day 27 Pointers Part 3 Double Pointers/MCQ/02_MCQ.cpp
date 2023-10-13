#include <iostream>

using namespace std;

int main()
{
    int first = 6;
    int *ptr = &first;
    int *ptr2 = ptr;

    (*ptr2)++;
    cout << first << endl;

    return 0;
}