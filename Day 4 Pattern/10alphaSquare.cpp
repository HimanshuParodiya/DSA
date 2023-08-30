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
        int j = 0;
        while (j < num)
        {
            char ch = 'A' + j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
