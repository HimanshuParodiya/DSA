#include <iostream>
#include <vector>
using namespace std;

void sayDigits(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }

    int lastDigit = n % 10;
    n = n / 10;

    sayDigits(n, arr);
    cout << arr[lastDigit] << " ";
}

int main()
{

    int n = 342;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(n, arr);

    return 0;
}
