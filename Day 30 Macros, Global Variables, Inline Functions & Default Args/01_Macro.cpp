#include <iostream>
using namespace std;

#define PI 3.14 // creating Macros (never use ;)

int main()
{
    int r = 5;

    // float area = 3.14 * r * r;

    // I can also create a variable instead of directly writing 3.14
    // float pi = 3.14;
    // float area = pi * r * r;

    // I can also create a Macros

    float area = PI * r * r; // PI is replacing with the Macros(3.14)
    // we can change the macros like
    // PI = PI + 1; // error: lvalue required as left operand of assignment
    cout << PI;
    cout << "Area for r " << r << " is " << area;

    return 0;
}