
#include <iostream>
using namespace std;

// int power(int a, int b)
// {

//     int total = 1;
//     int i = 1;

//     while (i <= numberPower)
//     {
//         total *= num;
//         i++;
//     }
//     return total;
// }

int power()
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
    return total;
}

int main()
{

    // cout << power(num, numberPower) << endl;
    cout << power() << endl;
    cout << power() << endl;

    return 0;
}