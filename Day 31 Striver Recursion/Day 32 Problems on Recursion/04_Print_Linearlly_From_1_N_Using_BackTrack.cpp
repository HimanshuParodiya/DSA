#include <iostream>
using namespace std;

// here we can't use i+1
// so what we can do is we can write cout<<n after recursion call

void printNTimes(int i, int n)
{

    if (i < 1)
    {

        return;
    }

    printNTimes(i - 1, n); // here cout is not happening first function will go first

    cout << i << endl; // this will cout when the last function will return(when i<1) then this cout will print the value of i then it will see } means this function end and it will go further and further
}

int main()
{

    int n = 10;
    int initialVal = 10;
    printNTimes(initialVal, n);

    return 0;
}