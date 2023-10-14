#include <iostream>
using namespace std;

// it seems good but it is not good
// we will see why later
int &update(int num)
{
    int a = num;

    int &ans = a;

    return ans;
}

int main()
{
    int num = 5;

    int val = update(num);

    cout << val;

    return 0;
}