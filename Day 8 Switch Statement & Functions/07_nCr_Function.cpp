
#include <iostream>
using namespace std;

int factorial(int a)
{
    int i = 1;
    int fact = 1;
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

    int answer = nCr();
    cout << answer;
    return 0;
}