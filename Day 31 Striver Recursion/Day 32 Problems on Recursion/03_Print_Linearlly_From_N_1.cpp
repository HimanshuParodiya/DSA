#include <iostream>
using namespace std;

void printNTimes(int i, int n)
{

    if (i < 1)
    {

        return;
    }

    cout << i << endl;
    printNTimes(i - 1, n);
}

int main()
{

    int n = 10;
    int initialVal = 10;
    printNTimes(initialVal, n);

    return 0;
}