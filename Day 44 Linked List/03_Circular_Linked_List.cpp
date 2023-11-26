#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory free for node with data " << value << endl;
    }
};

void printLinkedList(Node *tail)
{
    Node *temp = tail; // storing address of tail

    do
    {
        cout << temp->data << " ";
        temp = temp->next; // going to next node and we are taking tail as by value so we can update tail
    } while (tail->next != temp);

    // cout << endl;
}

void insertNode(Node *&tail, int element, int data)
{
    // assuming that element is present in the list
    if (tail == NULL) // if true mean that is the empty linked list
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // creating circle
    }
    else // none empty list
    {
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }

        // current is found
        Node *temp = new Node(data);

        temp->next = current->next;
        current->next = temp;
        if (current == tail)
        {
            // If the element is the current tail, update the tail to the newly inserted node
            tail = temp;
        }
    }
};

int main()
{
    // Node *node1 = new Node(5);
    // Node *tail = node1;
    // printLinkedList(tail);

    Node *tail = NULL;
    insertNode(tail, 5, 3);
    printLinkedList(tail);
    insertNode(tail, 3, 6); // search for 3 in linked list and insert 6 there
    printLinkedList(tail);
    insertNode(tail, 6, 9); // search for 6 in linked list and insert 9 there
    printLinkedList(tail);
    insertNode(tail, 9, 1); // search for 6 in linked list and insert 1 there
    printLinkedList(tail);
    return 0;
}