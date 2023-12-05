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

Node *sortList(Node *&head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            oneCount++;
        }
        else if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int> arr = {0, 1, 2, 1, 2};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    sortList(head);
    printLinkedList(head);
    return 0;
}
