#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "abcdefg";
    int k = 2;

    for (int i = 0; i < s.length(); i++)
    {

        for (int j = 0; j < s.length(); j++)
        {
            swap(s[j], s[k]);
        }

        break;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }

    return 0;
}