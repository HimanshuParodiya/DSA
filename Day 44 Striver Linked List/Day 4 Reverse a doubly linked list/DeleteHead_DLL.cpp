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

Node *deleteHeadDLL(Node*&head) {
    if (head == NULL || head->next == NULL)
    {
        return NULL
    }
    
    Node *temp = head;
    head = head-> next ; // going to next node after head
    head->prev = NULL; // prev of new node is pointing to head
    temp->next = NULL; // now temp is not pointing to anything 
    delete(temp); // delete the temp
    return head; // return new head
}


int main(){
    vector<int> arr = {2,4,7,5};
    Node *head = convertArr2DLL(arr);
    printDoublyLinkedList(head);
    cout<<"Now we will delete the head"<<endl;
    deleteHeadDLL(head);
    printDoublyLinkedList(head);

    return 0;
}