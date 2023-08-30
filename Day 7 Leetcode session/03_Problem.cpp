// leetcode 1281

// given number
// get the product of number
// get the sum of number
// product - sum

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int product = 1;
    int sum = 0;
    for (int i = num; i > 0; i /= 10)
    {
        int remender = i % 10;
        product *= remender;
        sum += remender;
        // i = i / 10;
    }

    cout << (product - sum) << endl;

    return 0;
}
