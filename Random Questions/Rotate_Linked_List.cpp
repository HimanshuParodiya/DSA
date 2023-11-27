#include <iostream>
using namespace std;

// brute force approach
// there are 2 cases
// k<lengthOfLinkedList or k>=lengthOfLinkedList
// any rotation which is a multiplication of length will give us original linked list again and again

// so if k = 12 and len is 5 we will get same linked list till k = 10 so we just need to do 2 times more to get output
// so if k >= len we can do k = k % len so we will get how many times list should be rotate

// so first, we need to know the length of the linked list
// second, we need to make it circular linked list so last node will point to head

// let's say linked list is 1 2 3 4 5 and k = 2 so ans = 4 5 1 2 3
// so k = len - k | k = 3 so 3rd node should point to null
// so what we will do is we will traverse till 3 and then point head to 3->next

// 1st count the length of the linked list
// 2nd lastElement->next = head
// 3rd find k = len - kth node and point it to null

// time complexity is O(n) + O(n - (n % k)) which is equal to O(n)
// space complexity is O(1)
int main()
{

    return 0;
}