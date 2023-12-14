#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node *child;

    Node(int data1)
    {
        data = data1;
        next = NULL;
        child = NULL;
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
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL) // if there is no node in Linked List
    {
        head = newNode; // point head to that node
        tail = newNode; // point tail to that node
        return;
    }
    else
    {                         // if there is a node in the linked list them
        tail->next = newNode; // add that new element at the end of the linked list
        tail = newNode;       // and point tail to newNode
    }
}
Node *Merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    Node *ans = new Node(-1);
    Node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->child = left;
            temp = left;
            left = left->child;
        }
        else
        {
            temp->child = right;
            temp = right;
            right = right->child;
        }
    }
    while (left != NULL)
    {
        temp->child = left;
        temp = left;
        left = left->child;
    }
    while (right != NULL)
    {
        temp->child = right;
        temp = right;
        right = right->child;
    }
    ans = ans->child;
    return ans;
}

Node *flattenLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *down = head;
    Node *right = flattenLinkedList(head->next);
    down->next = NULL;
    Node *ans2 = Merge(down, right);
    return ans2;
}
int main()
{
    vector<int> arr = {1, 3, 2, 4, 5};
    Node *head = convertArr2LL(arr);
    Node *answer = flattenLinkedList(head);
    printLinkedList(answer);
    return 0;
}
