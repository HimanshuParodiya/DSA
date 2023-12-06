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

Node *solve(Node *&first, Node *&second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *current1 = first;
    Node *next1 = current1->next;
    Node *current2 = second;
    Node *next2 = current2->next;

    // next1 node and current2 node should not point to NULL
    while (next1 != NULL && current2 != NULL)
    {
        // if current2 point between current1 and next1
        if ((current2->data >= current1->data) && (current2->data <= next1->data))
        {
            current1->next = current2;
            next2 = current2->next; // to keep track of second list because when we will point 1st node of 2nd LL we can lose the track of second LL
            current2->next = next1;

            // till here 1st node of second LL is place between current1 and next1 of first Linked List

            // now we are traversing the first and second LL for another node
            current1 = current2;
            current2 = next2;
        }
        else
        {
            // if current2 is not laying between current1 and next1 traverse it to next node
            current1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                current1->next = current2;
                return first;
            }
        }
    }
    return first;
}

Node *sortTwoLists(Node *first, Node *second)
{

    // if any one of the linked list is empty return another linked list
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    // cheking which linked list first node is small
    if (first->data <= second->data)
    {
        return solve(first, second); // first's first data is small
    }
    else
    {
        return solve(second, first); // second's first data is small
    }
}

int main()
{
    vector<int> arr = {0, 1, 4, 5};
    vector<int> arr2 = {0, 2, 3, 5};
    Node *head = convertArr2LL(arr);
    Node *head2 = convertArr2LL(arr2);
    sortTwoLists(head, head2);
    printLinkedList(head2);
    return 0;
}
