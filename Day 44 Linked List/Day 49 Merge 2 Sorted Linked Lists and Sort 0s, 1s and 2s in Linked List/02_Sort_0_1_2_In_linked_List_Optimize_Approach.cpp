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
void insertAtTail(Node *&tail, Node *currentNode)
{
    tail->next = currentNode;
    tail = currentNode;
}

Node *sortList(Node *head)
{
    // 3 dummy nodes and each dummy node is pointed by head and tail
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead; // Fix: Initialize oneTail with oneHead
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead; // Fix: Initialize twoTail with twoHead

    Node *currentNode = head;

    // create separate list for 0s, 1s, and 2s.
    while (currentNode != NULL)
    {
        int value = currentNode->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, currentNode);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, currentNode);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, currentNode);
        }
        currentNode = currentNode->next;
    }

    // merge 3 linked lists of 0s, 1s, and 2s.

    // 1s list not empty
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

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
