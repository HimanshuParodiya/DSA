
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a num: ";
    cin >> n;
    int m = n;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1; // creating a mask form 000000 then right shift and do (or) 1
        m = m >> 1;             // here we are working with bit so we did this. if we were working with number so we can do something like this m = m / 10
    }

    int ans = (~n & mask);

    cout << ans;

    return 0;
}
