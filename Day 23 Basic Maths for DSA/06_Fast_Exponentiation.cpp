
#include <iostream>
using namespace std;

long long fastExponentiation(long long base, long long exponent, long long mod)
{
    // so we will implement the power function here and try to implement its time complexity

    // here we have to find a^b let's say
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent & 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent = exponent >> 1;
    }
    return result;
}

int main()
{
    int n;
    long long mod = 1000000007; // Choose an appropriate modulo value

    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Calculate the factorial of n using fast exponentiation
    long long result = fastExponentiation(2, n, mod);

    cout << n << "! mod " << mod << " = " << result << endl;

    return 0;
}
