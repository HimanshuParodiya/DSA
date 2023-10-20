#include <iostream>
using namespace std;

long long printFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return printFibonacci(n - 1) + printFibonacci(n - 2); // here we are calling multiple recursion function
    // first  printFibonacci(n - 1) this function will call till the base case then printFibonacci(n - 2) this function will call till base case.
}

int main()
{

    int n = 100;
    long long ans = printFibonacci(n);
    cout << ans;

    return 0;
}
