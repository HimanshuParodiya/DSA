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

Node *removeTail(Node *&head)
{
    if (head == NULL || head->next == NULL) // if linked list is empty or there is only 1 node
    {
        return NULL;
    }
    Node *temp = head; // storing the head
    while (temp->next->next != NULL)
    {
        cout << "temp data " << temp->data << endl;
        temp = temp->next;
    }
    // now temp is at second last node
    Node *tailNode = temp->next; // storing the the last node
    delete (tailNode);
    // or           // deleting the last node
    // delete(temp->next)
    temp->next = NULL; // now last node is deleted so second last node become last node then we are pointing new last node to null
    return temp;       // returning new head which was pointing to next node
}

int main()
{
    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArr2LL(arr);
    printLinkedList(head);
    removeTail(head);
    printLinkedList(head);
    return 0;
}
