#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int total = 0;

    for (int i = 0; i <= n; i++)
    {
        total += i;
    }

    cout << total;

    return 0;
}