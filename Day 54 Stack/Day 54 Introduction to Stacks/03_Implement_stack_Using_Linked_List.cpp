#include <iostream>
using namespace std;

class Node
{
    // properties
public:
    int data;
    Node *next;

    // behaviors
public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor to delete the node (memory free)
    ~Node()
    {
        int value = this->data; // storing the value of current node just to print what we have delete
        if (this->next != NULL)
        {
            delete next;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void printLinkedList(Node *&head)
{

    Node *temp = head;   // create a new temp head pointing to head node
    while (temp != NULL) // temp will go to next node(Till temp != null)
    {
        cout << temp->data << " "; // print the current node
        temp = temp->next;         // passing temp to next node
    }

    cout << endl;
};

class Stack
{
    // properties
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

int main() // incomplete
{

    Node *node1 = new Node(4);
    Node *head = node1;

    printLinkedList(head);

    return 0;
}