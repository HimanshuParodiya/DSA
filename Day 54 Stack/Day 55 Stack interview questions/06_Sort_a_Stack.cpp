#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &myStack, int lastElement)
{
    // base case
    if (myStack.empty() || (!myStack.empty() && myStack.top() < lastElement)) // there are 2 possibilities, 1st stack can be empty, 2nd top element of tack should less then lastElement (but also check stack should not be empty because then we can't find the top element of stack)
    {
        myStack.push(lastElement);
        return;
    }

    int n = myStack.top();
    myStack.pop();

    sortedInsert(myStack, lastElement);

    myStack.push(n);
}

void sortStack(stack<int> &myStack)
{
    // base case
    if (myStack.empty())
    {
        return;
    }

    int lastElement = myStack.top();
    myStack.pop();

    sortStack(myStack);

    sortedInsert(myStack, lastElement);
}
int main()
{
    int arr[] = {5, 6, 4, 1, 7};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    stack<int> myStack;

    for (int i = 0; i < sizeOfArray; i++)
    {
        myStack.push(arr[i]);
    }

    sortStack(myStack);

    while (!myStack.empty())
    {
        cout << myStack.top();
        myStack.pop();
    }

    return 0;
}