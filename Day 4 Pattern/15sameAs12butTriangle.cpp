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
        int val = i;
        while (j <= i)
        {
            char ch = 'A' + val++ - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}