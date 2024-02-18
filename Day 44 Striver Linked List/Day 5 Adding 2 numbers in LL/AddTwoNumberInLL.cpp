#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

      Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
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

Node *AddTwoList(Node *head,Node *head2){
    Node *dummyNode = new Node(0);
    Node *current = dummyNode;

    Node *temp = head;
    Node *temp2 = head2;
    int carry = 0;
    while (temp || temp2) // while temp or temp2 is not null
    {
        int sum = carry;
        if (temp) // if temp is not null (case where the length of temp and temp2)
        {
            sum = sum + temp->data;
        }
        if (temp2) // if temp2 is not null (case where the length of temp and temp2)
        {
            sum = sum + temp2->data;
        }

        Node *newNode = new Node(sum%10); // new node to store the addition ( and sum % 10 is used to get single digit)
        carry = sum/10;// getting carry from added value
        current->next = newNode;// chaining for new linked list of added value
        current = current->next; // going to next node

        if (temp)
        {
            temp = temp->next;
        }
         
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }

    if (carry) // if carry is not 0
    {
        Node *newNode = new Node(carry);
        current->next = newNode;
        newNode->next = NULL;
    }

    return dummyNode->next; // our head is next of dummyNode
    
    
}

int main(){
    vector<int> arr = {3, 5};
    vector<int> arr2 = {4, 5, 9, 9};
    Node *head = convertArr2DLL(arr);
    Node *head2 = convertArr2DLL(arr2);
    printLinkedList(head);
    printLinkedList(head2);
    printLinkedList(AddTwoList(head,head2));

}