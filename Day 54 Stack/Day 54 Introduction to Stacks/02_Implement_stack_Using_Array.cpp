#include <iostream>
using namespace std;

class Stack
{
    // properties
    int *arr;
    int top;
    int size;

    // behaviors
public:
    Stack(int size)
    {
        this->size = size; // this->size = properties's size and size is argument given to constructor
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        // checking for space -> size - top > 1 (means we atleast have 1 space )
        if (size - top > 1)
        {
            top++;              // increment the top
            arr[top] = element; // add the element at the last index;
        }
        else // if there is no space then return stack overflow
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0) // if there is element in the stack then
        {
            top--; // decrement the top
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0) // if there is an element in the stack
        {
            return arr[top]; // return its last element
        }
        else // if there is no element in the stack means stack is empty
        {
            cout << "Stack is Emtpy" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1) // if top is -1 means there is no element in stack
        {
            return true; // then return true if there is no element
        }
        else // if top is not -1 means there is element in stack
        {
            return false; // then return false if there is element
        }
    }
};

int main()
{
    Stack myStack(5); // create new stack with the size of 5

    myStack.push(22);
    myStack.push(33);
    myStack.push(44);
    myStack.push(55);

    cout << "The peek element of the stack is " << myStack.peek() << endl;

    myStack.pop();
    cout << "After removing the last element the new peek element of the stack is " << myStack.peek() << endl;
    myStack.pop();
    cout << "After removing the last element the new peek element of the stack is " << myStack.peek() << endl;
    myStack.pop();
    cout << "After removing the last element the new peek element of the stack is " << myStack.peek() << endl;
    myStack.pop();
    cout << "After removing the last element the new peek element of the stack is " << myStack.peek() << endl;

    if (myStack.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}