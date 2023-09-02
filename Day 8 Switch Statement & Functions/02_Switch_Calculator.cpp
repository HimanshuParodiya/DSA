#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    char operation;
    cout << "Enter the operation: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Output is = " << (a + b);
        break;
    case '-':
        cout << "Output is = " << (a - b);
        break;
    case '*':
        cout << "Output is = " << (a * b);
        break;
    case '/':
        cout << "Output is = " << (a / b);
        break;
    case '%':
        cout << "Output is = " << (a % b);
        break;

    default:
        cout << "Please enter a valid operator (+, -, *, /, %)";
        break;
    }

    return 0;
}