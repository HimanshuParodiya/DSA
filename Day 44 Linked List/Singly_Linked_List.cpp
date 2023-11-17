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
int main()
{

    // if dont use heap memory(pointer) then this is good
    // Node node1;
    // cout << node1.data << endl; // due to pointer '->'
    // cout << node1.next;         // due to pointer '->'

    // Create a new Node object dynamically and initialize it with data 10
    Node *node1 = new Node(10);

    // Print the data stored in node1
    cout << node1->data << endl;

    // Print the next pointer of node1 (which is currently NULL)
    cout << node1->next << endl;

    return 0;
}