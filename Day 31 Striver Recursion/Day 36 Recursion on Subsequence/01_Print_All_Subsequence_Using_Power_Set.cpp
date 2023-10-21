#include <iostream>
using namespace std;

// 1st Approach - Brute Force

//* s = "abc" ---> " ", a", "b", "c", "a,b", "b,c", "a,c", "a,b,c"
// did you notice
// n = size of string 3
// size of output == 2^3 = 8

int main()
{

    string s = "abc";
    int n = s.size();
    for (int num = 0; num < (1 << n); num++)
    {
        string subStr = " ";
        for (int i = 0; i < n; i++)
        {
            if (num & (1 << i))
            {
                subStr += s[i];
            }
        }
        cout << subStr << endl;
    }

    return 0;
}

// time complexity O(2^n * n)