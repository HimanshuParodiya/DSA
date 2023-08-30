#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reverse = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        // cout << lastDigit << endl;

        reverse = (reverse * 10) + lastDigit;
        // cout << reverse << endl;
        num = num / 10;
    }

    cout << reverse;
    return 0;
}