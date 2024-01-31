#include <iostream>
#include <stack>
using namespace std;

int findMinCost(string str)
{

    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> myStack;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            myStack.push(ch);
        }
        else
        {
            // ch is close brace

            if (!myStack.empty() && myStack.top() == '{')
            {
                myStack.pop();
            }
            else
            {
                myStack.push(ch);
            }
        }
    }
    // stack contains invalid expression now
    int a = 0;
    int b = 0;

    while (!myStack.empty())
    {
        if (myStack.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        myStack.pop();
    }

    int answer = ((a + 1) / 2) + ((b + 1) / 2);
    return answer;
}

int main()
{

    string str = "{{}}";
    stack<int> myStack;

    int count = findMinCost(str);
    cout << count;

    return 0;
}