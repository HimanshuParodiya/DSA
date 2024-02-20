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


Node *reverseLLRecursive(Node *&head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newHead = reverseLLRecursive(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
    
}



int main(){
    vector<int> arr = {5,3,2,6,9,4};
    Node *head = convertArr2DLL(arr); 
    printLinkedList(head);
    head = reverseLLRecursive(head);
    printLinkedList(head);
    
    return 0;
}