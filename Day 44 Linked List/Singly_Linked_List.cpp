#include <iostream>
using namespace std;
// Define a class named Node
class Node
{
public:
    int data;   // Data part of the node, storing an integer
    Node *next; // Pointer to the next node in the linked list. (This line declares a pointer to another Node object named next, representing the next node in the linked list.)

    // Constructor to initialize the Node with data and set the next pointer to NULL
    Node(int data) // This is the constructor of the Node class. It initializes the data member with the provided value and sets the next pointer to NULL.
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data) // creating a function to insert node at starting (Why we took reference here because we don't want to create copy)
{                                        // pass it head so we know before which node we have to place this new node.

    // creation of new node
    Node *temp = new Node(data);

    // now the node which is created above we will change its Null Pointer to node(which was the first node)
    temp->next = head;
    // now the node which was there take his head and now point it to new node.
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data); // creation of new node
    tail->next = temp;           // current node pointing to new node
    // tail = temp->next;           // pointing tail to new node
    tail = temp; // pointing tail to new node (both are same above one)
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data) // taking position where we want to insert node of the data
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

    // adding next pointer of new node to next node
    newNodeToInsert->next = temp->next;
    // adding next pointer of previous node to new node
    temp->next = newNodeToInsert;
}

// Traverse Linked List

void printLinkedList(Node *&head)
{

    Node *temp = head;   // create a new temp head pointing to head node
    while (temp != NULL) // temp will go to next node(Till temp != null)
    {
        cout << temp->data << " "; // print the current node
        temp = temp->next;         // passing temp to next node
    }

    cout << endl;
}

int main()
{

    // if dont use heap memory(pointer) then this is good
    // Node node1;
    // cout << node1.data << endl; // due to pointer '->'
    // cout << node1.next;         // due to pointer '->'

    // Create a new Node object dynamically and initialize it with data 10
    Node *node1 = new Node(10);

    // Print the data stored in node1
    // cout << node1->data << endl;

    // Print the next pointer of node1 (which is currently NULL)
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1; // in single node head and tail point to same point
    Node *tail = node1; // in single node head and tail point to same point
    printLinkedList(head);
    // insert new node at head
    insertAtHead(head, 12);
    printLinkedList(head);
    insertAtHead(head, 15);
    printLinkedList(head);
    insertAtHead(head, 13);
    printLinkedList(head);

    // here we are getting output like 15 12 10
    // new data is getting add from head
    // but if we want to add it like 10 12 15
    // we have to add it from tail

    // insert new node at tail
    insertAtTail(tail, 31);
    printLinkedList(head);
    insertAtTail(tail, 14);
    printLinkedList(head);
    insertAtTail(tail, 24);
    printLinkedList(head);
    insertAtTail(tail, 224);
    printLinkedList(head);

    // insert new node at position
    insertAtPosition(tail, head, 3, 1);
    printLinkedList(head);
    insertAtPosition(tail, head, 2, 321);
    printLinkedList(head);
    insertAtPosition(tail, head, 6, 4);
    printLinkedList(head);
    insertAtPosition(tail, head, 11, 34); // now we are adding this node to at the end but we are not implementing tail anywhere because tail is pointing to old node
    printLinkedList(head);
    insertAtPosition(tail, head, 1, 334);
    printLinkedList(head);

    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    return 0;
}