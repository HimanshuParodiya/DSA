#include <iostream>
using namespace std;

int main()
{
    string str = "(()())    (())   (() (()) )";
    ()()()()(())()()()()(())

        (()())(())(()(()))

            for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            str.erase(i, 1);
        }
    }
    cout << str;

    return 0;
}