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
    ~Node()
    {
        int val = this->data;

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory free for node with data " << val << endl;
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {

        // create a node
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {

        Node *temp = new Node(data);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // creating temp
    Node *temp = head; // temp pointing to head
    int currentPosition = 1;

    // inserting at the end
    if (temp->next == NULL) // checking we the last node pointing to null means it is the last node or tail
    {
        insertAtTail(head, tail, data);
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

// deletion
void deleteNode(int position, Node *&head, Node *&tail)
{
    // handling first node deletion
    if (position == 1)
    {
        Node *temp = head;       // say temp to first node having head so that we can delete temp and free the memory
        temp->next->prev = NULL; // first, we will point prev of [5] to NULL for that
        head = temp->next;       // second, we will move the head from [3] to [5]
        temp->next = NULL;       // third, we will point next of [3] to NULL for that
        delete temp;             // fourth, we will remove the memory for that particular deleted node.
    }
    else if (position == getLinkedListLength(head))
    {
        Node *temp = tail;
        temp->prev->next = NULL;
        tail = temp->prev;
        temp->prev = NULL;
        delete temp;
    }
    else
    {                         // handling deletion of middle or last node
        Node *current = head; // initially pointing to head
        Node *prev = NULL;    // initially prev is NULL what comes before head nothing so null

        int currentPosition = 1;
        while (currentPosition < position)
        {
            prev = current;          // incrementing prev
            current = current->next; // incrementing current
            currentPosition++;
        }

        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;

        delete current;
    }
}

int main()
{
    // Node *node1 = new Node(30);

    // Node *head = node1;
    // Node *tail = node1;

    // now we want to start from 0 like above we have create a node with data 30 so initially head and tail is null
    Node *head = NULL;
    Node *tail = NULL;
    // but now we are getting an error

    // insert at head
    printLinkedList(head);
    insertAtHead(head, tail, 20);
    printLinkedList(head);
    insertAtHead(head, tail, 10);
    printLinkedList(head);
    cout << getLinkedListLength(head) << endl;

    // insert at tail

    insertAtTail(head, tail, 40);
    printLinkedList(head);
    insertAtTail(head, tail, 50);
    printLinkedList(head);

    cout << getLinkedListLength(head) << endl;

    // insert at position

    insertAtPosition(tail, head, 1, 0);
    printLinkedList(head);
    insertAtPosition(tail, head, 5, 60);
    printLinkedList(head);

    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    deleteNode(1, head, tail);
    printLinkedList(head);
    deleteNode(5, head, tail);
    printLinkedList(head);
    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    return 0;
}