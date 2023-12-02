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

Node *removeHead(Node *&head)
{
    if (head == NULL) // if linked list is empty
    {
        return head;
    }
    Node *temp = head; // storing the head
    head = head->next; // head going to next node
    delete (temp);     // deleting the previous head
    return head;       // returning new head which was pointing to next node
}

int main()
{
    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    removeHead(head);
    printLinkedList(head);
    return 0;
}
