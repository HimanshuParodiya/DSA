#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int count = 1;

    int i = num;

    while (i >= 1)
    {
        int j = i;

        while (j <= num)
        {
            cout << count++;
            j++;
        }
        cout << endl;

        i--;
    }

    return 0;
}

// 4
// 1
// 23
// 456
// 78910