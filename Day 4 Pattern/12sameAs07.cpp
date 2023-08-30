#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int i = 0;

    while (i < num)
    {
        int j = 1;
        int val = i;
        while (j <= num)
        {
            char ch = 'A' + val++;

            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}