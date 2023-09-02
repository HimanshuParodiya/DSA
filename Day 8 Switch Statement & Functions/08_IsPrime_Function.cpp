#include <iostream>
using namespace std;

bool isPrime()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{

    cout << boolalpha << isPrime();
    return 0;
}
