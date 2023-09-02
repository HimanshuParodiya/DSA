#include <iostream>
#include <math.h>
using namespace std;

int converToBinary(int a)
{
    int i = 0;
    int ans = 0;
    while (a != 0)
    {
        int bit = a & 1;
        ans = (bit * pow(10, i)) + ans;
        a = a >> 1;
        i++;
    }
    return ans;
}

int totalSetBits(int a)
{
    int bits = converToBinary(a);
    int total = 0;

    while (bits != 0)
    {
        int lastDigit = bits % 10;
        if (lastDigit == 1)
        {
            total++;
        }
        bits = bits / 10;
    }
    return total;
}

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int first = totalSetBits(a);
    int second = totalSetBits(b);
    int total = first + second;

    cout << total;

    return 0;
}

// - answer from comments

// #include <iostream>
// #include <math.h>
// using namespace std;

// int bitConverter(int n)
// {
//     int i = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = ans + bit * pow(10, i);
//         n = n >> 1;
//         i = i + 1;
//     }
//     return ans;
// }

// int BitCounter(int n)
// {
//     int num = bitConverter(n);
//     int ans = 0;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         if (digit == 1)
//         {
//             ans = ans + digit;
//         }
//         num = num / 10;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the Value of A and B" << endl;
//     cin >> a;
//     cin >> b;

//     int answer = BitCounter(a) + BitCounter(b);
//     cout << answer;
// }