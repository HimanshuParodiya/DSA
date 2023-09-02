#include <iostream>
using namespace std;

// bool isEven()
// {
//     int num;
//     cout << "Enter a number to check odd or even: ";
//     cin >> num;

//     bool isEvenFlag = false;
//     int i = 2;

//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             isEvenFlag = true;
//             break;
//         }
//         i++;
//     }
//     return isEvenFlag;
// }

bool isEven()
{
    int num;
    cout << "Enter a number to check odd or even: ";
    cin >> num;

    if (num & 1)
    {
        return false;
    }

    return true;
}

int main()
{

    cout << boolalpha << isEven();

    return 0;
}
