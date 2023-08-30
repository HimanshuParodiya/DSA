#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    // int i = 1;

    // while (i <= num)
    // {
    //     int count = i;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // --------------------------------------------

    // without using 3rd variable

    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// 5
// 1
// 23
// 345
// 4567
// 56789