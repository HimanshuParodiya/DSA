#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 1;
    bool flag = false;

    while (i <= 30)
    {
        if (pow(2, i) == num)
        {
            flag = true;
            break;
        }
        i++;
    }
    cout << boolalpha << flag;

    return 0;
}