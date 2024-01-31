#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string myStr = "Hello";
    stack<char> myStack;

    cout << "Original string is ";
    for (char i = 0; i < myStr.length(); i++)
    {
        cout << myStr[i];
        myStack.push(myStr[i]);
    }

    cout << endl;
    cout << "Reversed string is ";

    string ans = "";
    while (!myStack.empty())
    {
        // cout << myStack.top();
        ans.push_back(myStack.top());
        myStack.pop();
    }

    cout << ans;

    return 0;
}

// time and space complexity is O(N) (better approach is two pointer 1 from left and 1 from right)