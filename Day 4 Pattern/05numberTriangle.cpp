#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    int i = 1;

    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
