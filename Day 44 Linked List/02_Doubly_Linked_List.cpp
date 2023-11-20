#include <iostream>
using namespace std;

class Node
{
public:
    int data;

    //  The prev and next pointers in a node should point to other nodes in the list, not to integer values.
    // int *prev;
    // int *next;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing Linked List
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // going to next node
    }
    cout << endl;
}

// length of linked list

int getLinkedListLength(Node *head)
{
    int lengthOfLinkedList = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next; // going to next node
        lengthOfLinkedList++;
    }
    return lengthOfLinkedList;
}

void insertAtHead(Node *&head, int data)
{
    // create a node
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    // creating temp
    Node *temp = head; // temp pointing to head
    int currentPosition = 1;

    // inserting at the end
    if (temp->next == NULL) // checking we the last node pointing to null means it is the last node or tail
    {
        insertAtTail(tail, data);
        return;
    }

    // going till position
    while (currentPosition < position - 1)
    {
        temp = temp->next;
        currentPosition++;
    }

    // creating a new node
    Node *newNodeToInsert = new Node(data);
    newNodeToInsert->next = temp->next;
    temp->next->prev = newNodeToInsert; // prev of next of temp
    temp->next = newNodeToInsert;
    newNodeToInsert->prev = temp;
}

int main()
{
    Node *node1 = new Node(30);

    Node *head = node1;
    Node *tail = node1;

    // insert at head
    printLinkedList(head);
    insertAtHead(head, 20);
    printLinkedList(head);
    insertAtHead(head, 10);
    printLinkedList(head);
    cout << getLinkedListLength(head) << endl;

    // insert at tail

    insertAtTail(tail, 40);
    printLinkedList(head);
    insertAtTail(tail, 50);
    printLinkedList(head);

    cout << getLinkedListLength(head) << endl;

    // insert at position

    insertAtPosition(tail, head, 1, 0);
    printLinkedList(head);
    insertAtPosition(tail, head, 7, 0);
    printLinkedList(head);
    return 0;
}