#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool isPrime = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";
    }

      return 0;
}