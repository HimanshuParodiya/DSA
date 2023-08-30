#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int i = 1;
    while (i <= num)
    {
        int space = 2;
        while (space <= i)
        {
            cout << " ";
            space++;
        }
        int j = num;
        while (j >= i)
        {
            cout << "*";
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}