#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *ptr = &i;
    int **double_Ptr = &ptr;

    // cout << *double_Ptr;
    cout << *ptr;

    return 0;
}