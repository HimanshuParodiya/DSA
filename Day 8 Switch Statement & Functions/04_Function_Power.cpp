#include <iostream>
using namespace std;

int main()
{
    int num, numberPower;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the Power: ";
    cin >> numberPower;

    int total = 1;
    int i = 1;

    while (i <= numberPower)
    {
        total *= num;
        i++;
    }
    cout << total;

    return 0;
}
