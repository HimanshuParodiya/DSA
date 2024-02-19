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
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *oddIndex = head;
    Node *evenIndex = head->next;
    Node *evenHead = head->next; // storing the stating of evenIndex head because evenIndex will move

    while (evenIndex != NULL && evenIndex->next != NULL)
    {
        oddIndex->next = evenIndex->next;
        oddIndex = oddIndex->next; // oddIndex will become 4 then 5

        evenIndex->next = oddIndex->next;
        evenIndex = evenIndex->next; // evenIndex will become 4 then 6
    }

    oddIndex->next = evenHead;
    return head;
    
     
}



int main(){
    vector<int> arr = {1,3,4,2,5,6};
    Node *head = convertArr2DLL(arr); 
    printLinkedList(head);
    OddEvenConverter(head);
    printLinkedList(head);
    
    return 0;
}