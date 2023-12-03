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

Node *insertAtKthPosition(Node *&head, int position, int val)
{
    if (head == NULL)
    {
        if (position == 1)
        {
            return new Node(val);
        }
        return head;
    }

    if (position == 1)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        return head;
    }
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if (count == position - 1)
        {
            Node *neWNode = new Node(val);
            neWNode->next = temp->next;
            temp->next = neWNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    insertAtKthPosition(head, 2, 6);
    printLinkedList(head);
    return 0;
}