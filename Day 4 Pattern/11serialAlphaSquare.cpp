#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int i = 1;
    // int val = 0;
    char ch = 'A';

    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << ch++;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}

// 3
// ABC
// DEF
// GHI