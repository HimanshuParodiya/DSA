#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    // int i = 1;

    // while (i<=num)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    // inverse triangle

    int i = num;

    while (i >= 0)
    {
        int j = i;
        while (j >= 0)
        {
            cout << "*";
            // cout << i;
            // cout << j;
            j--;
        }
        cout << endl;
        i--;
    }
    // int i = 1;

    // while (i <= num)
    // {
    //     int j = num;
    //     while (j >= i)
    //     {
    //         // cout << "*";
    //         // cout << i;
    //         // cout << j;
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // -----------------------------------------------------------------

    // while (i<=num)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    //    int count = 1;

    // while (i<=num)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    return 0;
}