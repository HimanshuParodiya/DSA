#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBracket(string &myExpression)
{
    stack<char> myStack;

    for (int i = 0; i < myExpression.length(); i++)
    {
        char ch = myExpression[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            myStack.push(ch);
        }
        else
        {
            // ch ya toh ')' hai or lowercase letter

            if (ch == ')')
            {
                bool isRedundant = true;
                while (myStack.top() != '(')
                {
                    char top = myStack.top();

                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }

                    myStack.pop();
                }

                if (isRedundant)
                {
                    cout << boolalpha << true << " There is redundant";
                    return true;
                }
                myStack.pop();
            }
        }
    }

    cout << boolalpha << false << " There is no redundant";
    return false;
}

int main()
{
    string myExpression = "((a)+b)";
    findRedundantBracket(myExpression);

    return 0;
}
