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

Node *reverseList(Node *head)
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void insertAtTail(Node *head, Node *tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        // if empty
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;

        int digit = sum % 10;

        // create node and add in answer list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;

        // create node and add in answer list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        first = first->next;
    }
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;

        // create node and add in answer list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        second = second->next;
    }
    // when only carry remain

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        // create node and add in answer list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
    }

    return ansHead;
}

Node *addTwoList(Node *first, Node *second)
{
    // reverse linked list
    first = reverseList(first);
    second = reverseList(second);

    // add each node
    Node *answer = add(first, second);

    // reverse the answer list
    answer = reverseList(answer);

    // return the answer
    return answer;
}

int main()
{
    vector<int> arr = {4, 5};
    vector<int> arr2 = {3, 4, 5};
    Node *head = convertArr2LL(arr);
    Node *head2 = convertArr2LL(arr2);
    Node *ans = addTwoList(head, head2);
    printLinkedList(ans);
    return 0;
}
