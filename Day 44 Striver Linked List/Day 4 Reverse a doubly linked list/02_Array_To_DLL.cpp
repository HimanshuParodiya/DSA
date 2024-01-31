#include <iostream>
#include <vector>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data1)
    {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *nextNode = new Node(arr[i]);
        nextNode->next = NULL;
        nextNode->prev = temp;
        temp->next = nextNode;
        temp = temp->next;
        // or 
        // temp = nextNode;   
    }
    return head;
}

void printDoublyLinkedList(Node *&head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
       cout << endl;
    
}

int main()
{
    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArr2DLL(arr);
    printDoublyLinkedList(head);
    return 0;
}
