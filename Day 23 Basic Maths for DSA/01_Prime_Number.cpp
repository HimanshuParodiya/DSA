#include <iostream>
using namespace std;

bool isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return true;
}

int main()
{

    int num;
    cout << "Enter a number: ";

    cin >> num;

    int result = isPrime(num);

    if (result)
    {
        cout << num << " is a prime number :)";
    }
    else
    {

        cout << num << " is not a prime number :(";
    }

    return 0;
}