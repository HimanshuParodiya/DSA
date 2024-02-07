#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data = data;
        this->next = NULL; 
        this->prev = NULL; 
    }
};

Node* convertArr2DLL(vector<int>&arr){
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *nextNode =  new Node(arr[i]);
        nextNode->next = NULL; // next is null of new node
        nextNode->prev = temp; // prev is pointing to head
        temp->next = nextNode; // head is pointing to new node
        temp = temp->next; // head is moving to next node
    }

    return head;
    
}

void printDoublyLinkedList(Node *&head){
    Node *temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

Node *deleteKthNodeDLL(Node*&head, int position) {

    if (head == NULL)
    {
        return NULL;
    }
    
   Node *temp = head;
    int count = 0;
        
    while (temp != NULL)
    {
        count++;
        if (count == position)
        {
            break;
        }
        temp = temp->next;
    }
    // now due to break we exist from the while loop 
    // now out temp is pointing to kth node

    Node* prevNode  = temp->prev;
    Node* nextNode  = temp->next;

    if (prevNode == NULL && nextNode==NULL) // this means linked list has only 1 node
    {
        delete(temp);
        return NULL;
    }

    
    // if (position == 1)
    // or
    if (prevNode == NULL)
    {
        head = head->next;
        head ->prev = NULL;
        temp->next = NULL;
        delete(temp);
        return head;    
    }

    if (nextNode  == NULL) // temp is at tail
    {
        // delete tail 
        Node *newLastNode = temp->prev;
        newLastNode->next = NULL;
        temp->prev = NULL;
        delete(temp);
        return head;
    }
    
    // temp is at somewhere between 
    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    temp ->next = NULL;
    temp ->prev = NULL;

    return head;
    
}


int main(){
    vector<int> arr = {2,4,7,5};
    Node *head = convertArr2DLL(arr);
    printDoublyLinkedList(head);
    cout<<"Now we will delete the head"<<endl;
    deleteKthNodeDLL(head,3);
    printDoublyLinkedList(head);

    return 0;
}