#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
public:
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    };
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
        // array and set its 'back' pointer to
        // the previous node

        Node *temp = new Node(arr[i]);
        temp->prev = prev;
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

void printLinkedList(Node *head)
{
    while (head != nullptr)
    {
        // Print the data in the tail node
        cout << head->data << " ";
        // Move to the next node
        head = head->next;
    }
    cout<<endl;
}
Node *SortZeroOneAndTwo(Node *&head) {
    if (head == NULL || head->next == NULL)
    {
        /* code */
    }
    
    // Create three dummy nodes to represent the heads of three linked lists
    Node *zeroDummy = new Node(-1);  // Dummy for 0
    Node *oneDummy = new Node(-1);   // Dummy for 1
    Node *twoDummy = new Node(-1);   // Dummy for 2

    // Initialize tail pointers for each dummy node
    Node *zeroTail = zeroDummy;
    Node *oneTail = oneDummy;
    Node *twoTail = twoDummy;

    // Initialize a temporary pointer to traverse the original linked list
    Node *temp = head;

    // Traverse the original linked list and attach nodes to respective dummy lists
    while (temp != NULL) {
        if (temp->data == 0) {
            zeroTail->next = temp;  // Attach the node to the dummy for 0
            zeroTail = temp;        // Move the tail pointer to the current node who's value is 0 
        } else if (temp->data == 1) {
            oneTail->next = temp;   // Attach the node to the dummy for 1
            oneTail = temp;         // Move the tail pointer to the current node who's value is 0
        } else {
            twoTail->next = temp;   // Attach the node to the dummy for 2
            twoTail = temp;         // Move the tail pointer to the current node who's value is 0
        }
        temp = temp->next;  // Move to the next node in the original linked list
    }

    // Connect the three lists
    zeroTail->next = oneDummy->next;  // Connect the dummy for 0 to the dummy for 1
    oneTail->next = twoDummy->next;   // Connect the dummy for 1 to the dummy for 2
    twoTail->next = NULL;             // Terminate the list of twos

    // Set head to the start of the sorted list
    head = zeroDummy->next;

    // Clean up the dummy nodes
    delete zeroDummy;
    delete oneDummy;
    delete twoDummy;

    return head;
}

int main(){
    vector<int> arr = {1,0,2,1,0,2};
    Node *head = convertArr2DLL(arr); 
    printLinkedList(head);
    SortZeroOneAndTwo(head);
    printLinkedList(head);
    
    return 0;
}