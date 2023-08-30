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
        char ch = 'A' + i - 1; // now i dont have to do this i = 0 at line no 10
        while (j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}