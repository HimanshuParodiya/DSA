#include <iostream>
using namespace std;

int getFactorial(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * getFactorial(n - 1);
}

int main()
{
    int n = 5;

    int ans = getFactorial(n);

    cout << ans;

    return 0;
}