#include <iostream>
#include <map>
using namespace std;
// line 66
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

/// this is main code detect loop before that is singly linked list code

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Cycle present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

int main()
{
    Node *node1 = new Node(10);

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
    // insert new node at tail
    insertAtTail(tail, 31);
    printLinkedList(head);
    insertAtTail(tail, 14);
    printLinkedList(head);
    insertAtTail(tail, 24);
    printLinkedList(head);
    insertAtTail(tail, 224);
    printLinkedList(head);

    tail->next = head->next->next;

    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Cycle present";
    }
    else
    {
        cout << "cycle is not present" << endl;
    }
    return 0;
}

// Time complexity is O(n)
// and space complexity is O(1)