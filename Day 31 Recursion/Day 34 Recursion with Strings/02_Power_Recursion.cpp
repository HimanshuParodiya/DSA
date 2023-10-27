#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if ((b & 1) == 0) // if even
    {
        return ans * ans;
    }
    else // if odd
    {
        return a * ans * ans;
    }
}

int main()
{
    int a = 4;
    int b = 3;
    int ans = power(a, b);

    cout << ans;

    return 0;
}