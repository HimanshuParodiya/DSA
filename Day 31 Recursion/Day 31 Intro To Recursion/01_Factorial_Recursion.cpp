#include <iostream>
using namespace std;

long long getFactorial(int i)
{
    if (i == 1)
    {
        return 1;
    }
    return i * getFactorial(i - 1);
}

int main()
{

    int i = 20;

    long long ans = getFactorial(i);

    cout << ans;

    return 0;
}