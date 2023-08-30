#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // while (num != 0)
    // {
    //     int bit = num & 1; // if last value is 1 then anding with 1 will give us 1 then we will do right shift then again we will do & with 1
    //     num = num >> 1;    // right shifting
    // }
    //     cout << bit;       // printing the bit

    // so  above we were getting output but output was in wrong order we have to reverse it for that we will apply a formula
    int ans = 0;
    int i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        cout << bit << endl;
        num = num >> 1;
        i++;
    }

    cout << ans;

    return 0;
}