#include <iostream>
using namespace std;

int sumOfNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int total = n + sumOfNNumbers(n - 1);
    return total;
}

int main()
{
    int n = 5;
    int ans = sumOfNNumbers(n);
    cout << ans;

    return 0;
}
