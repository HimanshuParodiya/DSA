#include <iostream>
using namespace std;

int AP(int n)
{
    int ans = (3 * n + 7);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = AP(n);
    cout << ans;

    return 0;
}