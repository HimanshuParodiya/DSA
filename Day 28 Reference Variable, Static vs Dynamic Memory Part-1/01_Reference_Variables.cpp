#include <iostream>
using namespace std;

int main()
{

    int i = 5;

    // creating a reference variable
    int &j = i;

    cout << j << endl; // 5

    // we can change the value by both variable i and j
    return 0;
}