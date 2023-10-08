
#include <iostream>
using namespace std;

long long factorial(int a)
{
    int i = 1;
    long long fact = 1;
    while (i <= a)
    {
        fact *= i;
        i++;
    }
    return fact;
}

int nCr()
{
    // nCr = n!/r!*(n-r)! ====== formula or nCr
    int n, r;
    cout << "Enter n number: ";
    cin >> n;
    cout << "Enter r number: ";
    cin >> r;
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int answer = numerator / denominator;

    return answer;
}

int main()
{

    // nCr Formula
    // int answer = nCr();
    // cout << answer;

    // Factorial ans
    long long ans = factorial(20);
    cout << ans; // i have to use long long to print the result for factorial of 20
    return 0;
}