#include <iostream>
using namespace std;

// void func(int a, int b)
// {

//     a++;
//     b++;
//     cout << "The a is " << a;
//     cout << " The b is " << b;
// }

// int main()
// {
//     int a = 5;
//     int b = 6;
//     func(a, b);
//     return 0;
// }

// now let's create a function to get the max value form a and b

inline int getMax(int &a, int &b) // we save the memory usage by using reference variable(&) but function is still going to stack space so we use inline keyword here
{

    return (a > b) ? a : b;
}
int main()
{

    int a = 1;
    int b = 2;

    int ans = 0;

    ans = getMax(a, b);
    // ans = (a > b) ? a : b; // inline function will replace getMax with this ternary operator (but it should be one-liner)

    cout << "The max value is: " << ans << endl;

    a += 3;
    b += 1;
    ans = getMax(a, b);

    cout << "The max value is: " << ans << endl;

    return 0;
}