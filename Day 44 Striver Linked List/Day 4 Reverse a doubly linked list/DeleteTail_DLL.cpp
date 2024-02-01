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

Node *deleteTailDLL(Node*&head) {
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    
    Node *temp = head;
    while (temp ->next->next != NULL)
    {
        temp = temp->next;
    }
    cout<<"My temp is "<<temp->data<<endl;
    cout<<"My last node is "<<temp->next->data<<endl;
    
    Node *lastNode = temp->next; // pointing to last node
    temp->next = NULL; // second last node pointing to null
    lastNode->prev = NULL;
    delete(lastNode);
    return head;

}


int main(){
    vector<int> arr = {2,4,7,5};
    Node *head = convertArr2DLL(arr);
    printDoublyLinkedList(head);
    cout<<"Now we will delete the head"<<endl;
    deleteTailDLL(head);
    printDoublyLinkedList(head);

    return 0;
}