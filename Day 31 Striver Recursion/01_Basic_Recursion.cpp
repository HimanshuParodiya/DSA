#include <iostream>
using namespace std;

void func(int i)
{
    if (i < 0)
    {
        return;
    }

    cout << i << " ";
    i--;
    func(i);
}

int main()
{

    int i = 5;
    func(i);

    return 0;
}