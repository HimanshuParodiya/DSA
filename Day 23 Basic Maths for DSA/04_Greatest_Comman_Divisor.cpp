#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    // traverse till a == b

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
            // we can also use % instead of -
        }
        else
        {

            b = b - a;
            // we can also use % instead of -
        }
    }

    return a; // because b will become 0 so a will be answer
}

int main()
{

    int a = 42;
    int b = 53;

    int ans = gcd(a, b);

    cout << ans;

    return 0;
}