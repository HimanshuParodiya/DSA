#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    int i = 1;
    int count = 1;

    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// Enter the number:
// 3
// 123
// 456
// 789