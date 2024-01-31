#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &myStack, int element)
{
    if (myStack.empty())
    {
        myStack.push(element);
        return;
    }

    int lastElement = myStack.top();
    myStack.pop();

    insertAtBottom(myStack, element);
    myStack.push(lastElement);
}

void reverseStack(stack<int> &myStack)
{
    if (myStack.empty())
    {
        return;
    }

    int lastElement = myStack.top();
    myStack.pop();

    reverseStack(myStack);
    insertAtBottom(myStack, lastElement);
}

int main()
{
    int arr[] = {5, 4, 1, 7};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    stack<int> myStack;

    for (int i = 0; i < sizeOfArray; i++)
    {
        myStack.push(arr[i]);
    }

    reverseStack(myStack);

    while (!myStack.empty())
    {
        cout << myStack.top();
        myStack.pop();
    }

    return 0;
}