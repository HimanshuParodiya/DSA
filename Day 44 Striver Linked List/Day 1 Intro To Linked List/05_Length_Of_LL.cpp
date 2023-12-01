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

int lengthOfLinkedList(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArr2LL(arr);
    // cout << head->data;
    printLinkedList(head);
    int LinkedListLength = lengthOfLinkedList(head);
    cout << LinkedListLength;
    // Node *node1 = new Node(5);
    return 0;
}

// time Complexity is O(N)