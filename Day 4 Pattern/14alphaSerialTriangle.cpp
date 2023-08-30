#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int value = 0;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + value++;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}