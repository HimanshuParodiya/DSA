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

Node *removeKthNode(Node *&head, int k)
{
    if (head == NULL) // if linked list is empty or there is only 1 node
    {
        return NULL;
    }
    if (k == 1) // head deletion
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node *temp = head; // storing the head
    Node *prev = NULL; // storing the head
    while (temp != NULL)
    {
        cout << "temp data " << temp->data << endl;
        count++;
        if (count == k)
        {
            Node *toDelete = temp;
            prev->next = prev->next->next;
            delete (toDelete);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head; // returning new head which was pointing to next node
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    removeKthNode(head, 4);
    printLinkedList(head);
    return 0;
}
