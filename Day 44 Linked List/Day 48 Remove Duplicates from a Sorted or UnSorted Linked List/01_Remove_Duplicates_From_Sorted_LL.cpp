/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // If list is empty
        if (head == NULL)
        {
            return NULL;
        }

        ListNode *current = head;

        while (current != NULL)
        {
            if (current->next != NULL && current->val == current->next->val)
            {
                ListNode *next_next = current->next->next; // storing the next->next node
                ListNode *nodeToDelete = current->next;    // storing the duplicate node
                delete (nodeToDelete);                     // deleting the duplicate node
                current->next = next_next;
            }
            else
            {                            // not equal
                current = current->next; // go to next node
            }
        }

        return head;
    }
};