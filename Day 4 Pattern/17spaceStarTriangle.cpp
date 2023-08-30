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
        int j = 1;
        int space = num - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        while (j <= i)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}