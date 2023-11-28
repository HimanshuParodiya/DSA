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

// void printLinkedList(Node *tail)
// {
//     Node *temp = tail->next; // storing address of tail

//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next; // going to next node and we are taking tail as by value so we can update tail
//     } while (tail->next != temp);

//     // cout << endl;
// }

void printLinkedList(Node *tail)
{
    Node *temp = tail->next;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);

    cout << endl;
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

void deleteNode(Node *&tail, int value)
{
    // empty list

    if (tail == NULL)
    {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the linked list
        Node *prev = tail;
        Node *current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        // deleting node from 1 node in linked list
        if (current == prev) // means there is only 1 node in linked list
        {
            tail = NULL;
        }

        // deleting node from more than 2 node in linked list
        if (tail == current)
        {
            tail = prev;
        }

        current->next = NULL;
        delete current;
    }
}

bool isCircularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    // Node *node1 = new Node(5);
    // Node *tail = node1;
    // printLinkedList(tail);

    // Node *tail = NULL;
    // insertNode(tail, 5, 3);
    // printLinkedList(tail);
    // insertNode(tail, 3, 6); // search for 3 in linked list and insert 6 there
    // printLinkedList(tail);
    // insertNode(tail, 6, 9); // search for 6 in linked list and insert 9 there
    // printLinkedList(tail);
    // insertNode(tail, 9, 1); // search for 6 in linked list and insert 1 there
    // printLinkedList(tail);
    // insertNode(tail, 3, 4); // search for 6 in linked list and insert 1 there
    // printLinkedList(tail);

    // deleteNode(tail, 3);
    // printLinkedList(tail);

    // now we if linked list consist 1 node so we are trying to delete it.
    // Node *tail = NULL;

    // insertNode(tail, 5, 3);
    // printLinkedList(tail);

    // deleteNode(tail, 3);
    // printLinkedList(tail);

    // when we are deleting single node we are getting error because tail, prev and current everything pointing on that single node and then we are deleting it then we are printing it using tail which is raising an error of segmentation fault
    // so now we will create a case for deleting node when there is only 1 node in linked list

    // now we are solving for problem isCircular linked list or not
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    printLinkedList(tail);
    insertNode(tail, 3, 6); // search for 3 in linked list and insert 6 there
    printLinkedList(tail);
    insertNode(tail, 6, 9); // search for 6 in linked list and insert 9 there
    printLinkedList(tail);

    if (isCircularList(tail))
    {
        cout << "This is Circular linked list" << endl;
    }
    else
    {
        cout << "This is not a Circular linked list" << endl;
    }

    return 0;
}