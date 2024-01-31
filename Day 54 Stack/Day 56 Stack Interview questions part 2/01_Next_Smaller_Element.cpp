#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int size)
{
    stack<int> myStack;
    myStack.push(-1); // initially stack will have -1
    vector<int> answer(size);

    for (int i = size - 1; i >= 0; i--) // picking the first rightmost element first
    {
        int currentElement = arr[i];            // first rightmost element
        while (myStack.top() >= currentElement) // if stack's element is not less than rightmost element
        {
            myStack.pop(); // then pop the element from stack
        }
        answer[i] = myStack.top();    // now myStack.top() is smaller than currentElement so now we will put that smaller value in answer vector
        myStack.push(currentElement); // and push that rightmost element in the stack for the next element (rightmost - 1)
    }
    return answer; // return vector (answer) containing all the smaller values
}

int main()
{
    vector<int> arr = {5, 6, 4, 1, 7};
    int sizeOfArray = arr.size();

    vector<int> ans = nextSmallerElement(arr, sizeOfArray);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
