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
    Node *head = node1;
    printLinkedList(head);
    // insert new node
    insertAtHead(head, 12);
    printLinkedList(head);
    insertAtHead(head, 15);
    printLinkedList(head);

    // here we are getting output like 15 12 10
    // new data is getting add from head
    // but if we want to add it like 10 12 15
    // we have to add it from tail
    return 0;
}