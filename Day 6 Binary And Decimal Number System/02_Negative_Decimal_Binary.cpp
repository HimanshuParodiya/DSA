
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int absNum = abs(num);
    while (num != 0)
    {

        if (num < 0)
        {
            int oneComplement = ~absNum;           // One's complement of the absolute value
            int twoComplement = oneComplement + 1; // Add 1 to get two's complement
            num = twoComplement;
        }
        num = num >> 1;
    }
    cout << num;

    return 0;
}
