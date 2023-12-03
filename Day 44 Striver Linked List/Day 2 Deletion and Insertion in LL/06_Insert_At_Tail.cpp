#include <iostream>
#include <vector>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]); // pointing head to 1st node
    Node *mover = head;            // mover pointing to 1st node

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertTail(Node *&head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *newNodeVal = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << "Temp next is " << temp->data << endl;
        temp = temp->next;
    }
    temp->next = newNodeVal;
    newNodeVal->next = NULL;
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    insertTail(head, 6);
    printLinkedList(head);
    return 0;
}