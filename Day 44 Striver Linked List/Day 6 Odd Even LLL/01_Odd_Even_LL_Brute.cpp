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

Node *OddEvenConverter(Node*& head) {
    // first storing all odd indices in arr vector then storing all evens then changing their data 
    vector<int> arr;
    Node *temp  = head;
    while (temp!=NULL && temp->next!= NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    temp = head->next;

    while (temp!=NULL && temp->next!=NULL)
    {
        arr.push_back(temp->data);
        temp= temp->next->next;
    }

    temp = head;
    int i = 0;
    while (temp != NULL && i<arr.size() ) {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }
    // both ways are fine 
    // for (int i = 0; i < arr.size(); i++)
    //     {
    //     temp->data = arr[i];
    //     temp = temp->next;
    // }
            
    return head;
    
    
    
}

// 1 -> 4 
// oddIndex = 3



int main(){
    vector<int> arr = {1,3,4,2,5,6};
    Node *head = convertArr2DLL(arr); 
    printLinkedList(head);
    OddEvenConverter(head);
    printLinkedList(head);
    
    return 0;
}