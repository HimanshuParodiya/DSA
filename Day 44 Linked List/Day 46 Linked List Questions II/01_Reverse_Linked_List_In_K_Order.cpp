
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // base case
//         if(head == NULL){
//             return NULL;
//         }

//         // reverse 1st k node
//         ListNode* nextNode = NULL; // initialize current node
//         ListNode* currentNode = head; // pointing head by currentNode
//         ListNode* prevNode = NULL; // initialize prevNode
//         int count = 0; // initialize count to track of k should be greater then count

//         while(currentNode != NULL && count < k ){
//             nextNode = currentNode->next; //
//             currentNode->next = prevNode;
//             prevNode = currentNode;
//             currentNode = nextNode;
//             count++;
//         }

//         // recursion
//         if(nextNode != NULL){
//             head ->next = reverseKGroup(nextNode,k);
//         }

//         // return head of reversed list

//         return prevNode;
//     }
// };

// above we were reversing all the k groups of linked list even if reamining node are less then k they will also reverse
// like given 2 3 4 5 6 7 8 9
// output by above code = 4 3 2 7 6 5 9 8
// expected output = 4 3 2 7 6 5 8 9

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        // base case
        if (head == NULL)
        {
            return NULL;
        }

        // Check if there are at least k nodes remaining
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL && count < k)
        { // loop is used to traverse the list until either the end of linked list is reached or k node has been counted
            temp = temp->next;
            count++;
        }

        // If less than k nodes remaining, do not reverse
        if (count < k)
        { // k remaining node are less then k then don't perform the iterative reverse approach and return head at that node
            return head;
        }

        // reverse first k nodes
        ListNode *nextNode = NULL;
        ListNode *currentNode = head;
        ListNode *prevNode = NULL;
        count = 0;

        while (currentNode != NULL && count < k)
        {
            nextNode = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
            count++;
        }

        // recursion on the remaining nodes
        if (nextNode != NULL)
        {
            head->next = reverseKGroup(nextNode, k);
        }

        // return head of reversed list
        return prevNode;
    }
};
