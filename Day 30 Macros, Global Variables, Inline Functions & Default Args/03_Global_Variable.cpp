#include <iostream>
using namespace std;

// 2nd method to create a global variable is
int globalVariable = 26;

void updateVariableLocally(int i) // this will not sharing the variables
{
    cout << globalVariable << endl;
    i += 3;
}

void updateVariableGlobally(int &i)
{
    cout << globalVariable << endl;
    i += 3;
}

int main()
{
    int i = 5;
    cout << i << endl;

    // updateVariableLocally(i); // this will not sharing the variables
    // cout << i;

    updateVariableGlobally(i); // this will share the variables
    cout << i;
    cout << globalVariable << endl;

    return 0;
}