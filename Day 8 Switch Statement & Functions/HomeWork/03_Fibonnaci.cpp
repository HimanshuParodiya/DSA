#include <iostream>
using namespace std;

//- 1) using recursion
// int fibonnaciSeries(int n)
// {
//     if (n < 0)
//     {
//         return 0;
//     }
//     if (n == 0)
//     {
//         return 1;
//     }

//     return n + fibonnaciSeries(n - 1);
// }

// int main()
// {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;

//     int ans = fibonnaciSeries(a);
//     cout << ans;
//     return 0;
// }

//- 2) normal approch

void fibonnaciSeries()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int first = 0;
    int second = 1;
    int i = 0;
    int total = 0;
    cout << first << " " << second << " ";

    while (i < a)
    {
        total = first + second;

        first = second;
        second = total;
        i++;
        cout << total << " ";
    }
    return;
}

int main()
{

    fibonnaciSeries();
    cout << ans;

    return 0;
}

//- 3) answer from comments

// void fibonnaciSeries(int n)
// {

//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";
//     for (int i = 0; i <= n; i++)
//     {
//         int next_number = a + b;
//         cout << next_number << " ";

//         a = b;
//         b = next_number;
//     }
//     return;
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of N: " << endl;
//     cin >> n;

//     fibonnaciSeries(n);
// }