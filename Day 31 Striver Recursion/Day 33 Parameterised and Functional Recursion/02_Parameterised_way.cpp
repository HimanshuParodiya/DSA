#include <iostream>
using namespace std;

void sumOfNNumber(int n, int sum)
{

    if (n == 0)
    {
        cout << sum;
        return;
    }

    sumOfNNumber(n - 1, sum + n);
}

int main()
{

    int n = 5;
    int initialSum = 0;
    sumOfNNumber(n, initialSum);
    return 0;
}