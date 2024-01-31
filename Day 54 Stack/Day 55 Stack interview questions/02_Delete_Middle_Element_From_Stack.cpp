#include <iostream>
#include <stack>
using namespace std;

// second approach

void findAndDeleteMiddleElement(stack<int> &myStack, int count, int sizeOfArray)
{

    // base case
    if (count == sizeOfArray / 2) // when count reaches to middle element
    {
        myStack.pop(); // remove the element
        return;        // and stop recursion call
    }

    int lastElement = myStack.top(); // storing the last element

    myStack.pop(); // removing the last node

    findAndDeleteMiddleElement(myStack, count + 1, sizeOfArray); // increment the count for the next element to meet base case

    // now when recursion will reaches to base case we will add the last removed node to the myStack (that is why we stored the lastElement)

    myStack.push(lastElement);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    stack<int> myStack;
    int count = 0;

    // adding arr[] element to myStack
    for (int i = 0; i < sizeOfArray; i++)
    {
        myStack.push(arr[i]);
        // cout << myStack.top();
    }

    findAndDeleteMiddleElement(myStack, count, sizeOfArray);

    int sizeOfStack = myStack.size();

    for (int i = 0; i < sizeOfStack; i++)
    {
        cout << myStack.top();
        myStack.pop();
    }

    return 0;
}

// 1st approach

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5};
//     int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
//     stack<int> myStack;

//     cout << "The Original array is ";
//     for (int i = 0; i < sizeOfArray; i++)
//     {
//         cout << arr[i];
//         myStack.push(arr[i]);
//     }

//     cout << endl;
//     cout << "The New array is ";

//     int newArr[sizeOfArray] = {};
//     int middle = myStack.size() / 2;
//     for (int i = myStack.size(); i > 0; i--)
//     {
//         if (i == middle)
//         {
//             // cout << myStack.top();
//             myStack.pop();
//             continue;
//         }

//         newArr[i] = myStack.top();
//         cout << newArr[i] << "";
//         myStack.pop();
//     }

//     return 0;
// }

// time and space complexity is O(N) (better approach is two pointer 1 from left and 1 from right)