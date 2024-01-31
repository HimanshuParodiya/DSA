#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creation of stack
    stack<int> stackDataStructure;
    stackDataStructure.push(2);
    stackDataStructure.push(3);
    stackDataStructure.push(4);

    cout << stackDataStructure.top() << endl; // for 2 3 4 , 4 is the top element

    stackDataStructure.pop();

    cout << stackDataStructure.top() << endl; // for 2 3 , 3 is the top element

    if (stackDataStructure.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of the stack is " << stackDataStructure.size() << endl;

    return 0;
}