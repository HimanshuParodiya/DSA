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

bool checkPalindrome(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}
bool isPalindrome(Node *head)
{
    // create a vector
    vector<int> arr;

    // copy linked list data in an array
    Node *temp = head;

    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
}

int main()
{
    vector<int> arr = {1, 2, 1};
    vector<int> arr2 = {0, 2, 3, 5};
    Node *head = convertArr2LL(arr);
    int result = isPalindrome(head);
    cout << boolalpha << result;
    return 0;
}
