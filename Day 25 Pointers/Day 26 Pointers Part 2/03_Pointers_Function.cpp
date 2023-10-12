#include <iostream>
using namespace std;

void print(int *ptr)
{
    cout << ptr;
}
void update(int *ptr)
{
    *ptr = *ptr + 1;
}

int main()
{

    int val = 5;

    int *ptr = &val;
    print(ptr);
    cout << endl;
    update(ptr);
    cout << *ptr;

    return 0;
}