#include <iostream>
using namespace std;
// here we can use i-1

void printNTimes(int i, int n)
{

    if (i > n)
    {
        return;
    }

    printNTimes(i + 1, n);

    cout << i << endl;
}

int main()
{

    int n = 3;

    int initialVal = 1;

    printNTimes(initialVal, n);

    return 0;
}