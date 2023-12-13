#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int data1)
    {
        data = data1;
        next = NULL;
        random = NULL;
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

Node *cloneLinkedListWithRandomPointer(Node *&head)
{
    // 1st create a clone linked list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // create a map original node to cloned node
    unordered_map<Node *, Node *> oldToNewNode;

    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode; // This statement establishes a mapping between the original node and its cloned node using an unordered_map. The second approach is useful when you need to maintain a relationship between the original nodes and their corresponding cloned nodes for later reference or manipulation.
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    // now mapping is saved

    // range the random pointers

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL)
    {
        cloneNode->random = oldToNewNode[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    return cloneHead;
}

int main()
{
    vector<int> arr = {1, 3, 2, 4, 5};
    Node *head = convertArr2LL(arr);
    Node *answer = cloneLinkedListWithRandomPointer(head);
    printLinkedList(answer);
    return 0;
}
