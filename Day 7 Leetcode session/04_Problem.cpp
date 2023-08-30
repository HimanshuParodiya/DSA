
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = num;
    int count = 0;
    while (i != 0)
    {
        // because 1 & 1 ==1 and 0 & 1==0
        if (i & 1)
        {
            count++;
        }
        i = i >> 1;
    }

    cout << count << endl;

    return 0;
}
