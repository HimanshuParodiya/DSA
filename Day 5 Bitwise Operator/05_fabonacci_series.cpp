#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 0; i < num; i++)
    {
        int nextNum = a + b;

        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }

    return 0;
}