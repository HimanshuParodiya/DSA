#include <iostream>
using namespace std;

void printNTimes(string name, int n)
{

    if (n == 0)
    {
        return;
    }

    printNTimes(name, n - 1);
    cout << name << n << endl;
}

int main()
{

    string name = "Himanshu";
    int n = 10;

    printNTimes(name, n);

    return 0;
}