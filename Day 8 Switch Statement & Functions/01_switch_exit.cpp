#include <iostream>
#include <climits> //
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (INT_MIN)
    {
        switch (n)
        {
        case 1:
            cout << "bla" << endl;
            break;
        case 2:
            cout << "int" << endl;
            break;
        default:
            cout << "defalut" << endl;
        }
        cout << INT_MIN;
        // exit(0); // Exit successfully which means program has run successfully and then it is terminated
        // exit(1); // Exit Failure is indicated by exit(1) which means the abnormal termination of the program
        // break; // We can also use this to terminate loop
        // continue; // We can not use a continue with the switch statement. The break statement terminates the whole loop early. The continue statement brings the next iteration early. It stops the execution of the loop
    }
    cout << "hello";

    return 0;
}

// when we are using exit output of 4 --->
// defalut
// -2147483648

// when we are using break output of 4 --->
// defalut
// -2147483648
// hello