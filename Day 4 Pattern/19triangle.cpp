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
        int space = num - i;
        while (space >= 1)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int k = i - 1;
        while (k > 1 - 1)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }

    return 0;
}