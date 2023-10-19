#include <iostream>
using namespace std;

void printNTimes(int i, int n)
{

    if (n < i)
    {

        return;
    }

    cout << i << endl;
    printNTimes(i + 1, n);
}

int main()
{

    int n = 10;
    int initialVal = 1;
    printNTimes(initialVal, n);

    return 0;
}