#include <iostream>
using namespace std;

int sumOfNNumber(int n)
{

    if (n == 0)
    {
        return 0; // when f(0) it will become 0
    }

    return n + sumOfNNumber(n - 1);
}

int main()
{
    int n = 5;

    int ans = sumOfNNumber(n);
    cout << ans;

    return 0;
}