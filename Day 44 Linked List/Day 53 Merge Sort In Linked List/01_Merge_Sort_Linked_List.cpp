#include <iostream>
#include <vector>
#include <unordered_map>
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

Node *findMid(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *mergeLeftRight(Node *leftHalf, Node *rightHalf)
{
    if (leftHalf == NULL) // if left part is empty return right part
    {
        return rightHalf;
    }

    if (rightHalf == NULL) // if right part is empty return left part
    {
        return leftHalf;
    }

    // create dummy node
    Node *answer = new Node(-1);
    Node *temp = answer;

    // merge 2 sorted linked list
    while (leftHalf != NULL && rightHalf != NULL)
    {
        if (leftHalf->data < rightHalf->data)
        {
            temp->next = leftHalf;
            temp = leftHalf;
            leftHalf = leftHalf->next;
        }
        else
        {
            temp->next = rightHalf;
            temp = rightHalf;
            rightHalf = rightHalf->next;
        }
    }

    while (leftHalf != NULL)
    {
        temp->next = leftHalf;
        temp = leftHalf;
        leftHalf = leftHalf->next;
    }
    while (rightHalf != NULL)
    {
        temp->next = rightHalf;
        temp = rightHalf;
        rightHalf = rightHalf->next;
    }

    // now answer pointing to the dummy node so we will point to the actual head which next of dummy node

    answer = answer->next;

    return answer;
}

Node *mergeSort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL) // if linked list is empty or there is only 1 node
    {
        return head;
    }

    // we have to find the mid but we can apply start + end /2 because it is not a vector or array
    // so to find the mid we can use the fast and slow approach

    Node *mid = findMid(head);

    Node *leftHalf = head;
    Node *rightHalf = mid->next;

    mid->next = NULL; // separating left half by NULL

    // now we have two halves

    // now sort halves / breaking them down by recursion call
    leftHalf = mergeSort(leftHalf);
    rightHalf = mergeSort(rightHalf);

    // merging both halves
    Node *result = mergeLeftRight(leftHalf, rightHalf);

    return result;
}

int main()
{
    vector<int> arr = {1, 3, 2, 4, 5};
    Node *head = convertArr2LL(arr);
    Node *answer = mergeSort(head);
    printLinkedList(answer);
    return 0;
}
