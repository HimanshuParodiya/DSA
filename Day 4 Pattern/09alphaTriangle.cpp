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

        char ch = 'A' + i;
        int j = 1;
        while (j <= num)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}