
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 0;
    int decimalNum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        if (lastDigit == 1)
        {
            decimalNum += lastDigit * pow(2, i);
        }
        i++;
        num = num / 10;
        // bit nikalenge toh >> ya << use krenge or agar last digit nikalenge toh / 10 krenge jaise yaha kiya;
    }
    cout << decimalNum;

    return 0;
}
