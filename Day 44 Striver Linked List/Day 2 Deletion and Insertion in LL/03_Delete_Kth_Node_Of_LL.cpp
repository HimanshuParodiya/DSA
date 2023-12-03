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
    if (head == NULL || head->next == NULL) // if linked list is empty or there is only 1 node
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

    Node *temp = head; // storing the head
    int count = 1;
    while (temp != NULL)
    {
        cout << "temp data " << temp->data << endl;
        if (count == k)
        {
            Node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete (toDelete);
            break;
        }
        temp = temp->next;
        count++;
    }
    return head; // returning new head which was pointing to next node
}

int main()
{
    vector<int> arr = {2, 1, 3, 8, 5, 7, 9};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    removeKthNode(head, 10);
    printLinkedList(head);
    return 0;
}
