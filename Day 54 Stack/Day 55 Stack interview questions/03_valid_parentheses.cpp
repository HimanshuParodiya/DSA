#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string myExpression = "[[]]";
    stack<char> myStack;

    for (int i = 0; i < myExpression.length(); i++)
    {
        // if opening bracket are there then add it to the stack
        char ch = myExpression[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            myStack.push(ch);
        }
        else
        {
            // for closing bracket

            if (!myStack.empty()) // till there is an element
            {
                char top = myStack.top(); // storing the recent element
                if (ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '[')
                {
                    myStack.pop(); // if we match the pair then remove the expression
                }
                else
                {
                    cout << false; // if we didn't find the pair then break the loop
                    break;

                    // or
                    // return false;
                }
            }
            else // if stack is empty
            {
                cout << false; // then return true
                break;         // exit the loop
            }
        }
    }

    if (myStack.empty()) // if stack is empty means there
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}