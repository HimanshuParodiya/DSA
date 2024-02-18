
#include <bits/stdc++.h>

using namespace std;

// Define a Node class for doubly linked list
class Node
{
public:
    // Data stored in the node
    int data;
    // Pointer to the next node in the list
    //(forward direction)
    Node *next;
    // Pointer to the previous node in the list
    //(prevward direction)
    Node *prev;

    // Constructor for a Node with both data,
    // a reference to the next node,
    // and a reference to the previous node
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    // Constructor for a Node with data,
    // and no references to the next and
    // previous nodes (end of the list)
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to convert an array
// to a doubly linked list
Node *convertArr2DLL(vector<int> arr)
{
    // Create the head node with
    // the first element of the array

    Node *head = new Node(arr[0]);

    // Initialize 'prev' to the head node
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        // Create a new node with data from the
        // array and set its 'prev' pointer to
        // the previous node

        Node *temp = new Node(arr[i], nullptr, prev);
        // Update the 'next' pointer of the
        // previous node to point to
        // the new node
        prev->next = temp;
        // Move 'prev' to the newly created
        // node for the next iteration
        prev = temp;
    }
    // Return the head of the doubly linked list
    return head;
}

// Function to print the elements
// of the doubly linked list
void printLinkedList(Node *head)
{
    while (head != nullptr)
    {
        // Print the data in the tail node
        cout << head->data << " ";
        // Move to the next node
        head = head->next;
    }
}

Node *reverseDLL(Node *&head)
{
    // in order to optimize it we can traverse ll once and swap its pointer (prev with next ) and (next with prev)
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node *current = head;
    Node *prev = NULL;
    
    while (current != NULL)
    {
        prev = current->prev; // Storing the prev value 
        current->prev = current->next; // swapping the prev with next 
        current->next = prev; // swapping the next with stored prev value

        current = current->prev; // going for next current node 

    }
    head = prev->prev;
    return head;
}

int main()
{

    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArr2DLL(arr);
    printLinkedList(head);
    cout << endl;
    cout << "Doubly Linked list is now reversed" << endl;
    reverseDLL(head);
    printLinkedList(head);
    return 0;
}