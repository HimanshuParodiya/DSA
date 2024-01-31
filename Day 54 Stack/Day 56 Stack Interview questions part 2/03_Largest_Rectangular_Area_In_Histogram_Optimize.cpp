#include <iostream>
#include <stack>
#include <vector>
#include <climits>

using namespace std;

vector<int> nextSmallerElementIndex(vector<int> &arr, int size)
{
    stack<int> myStack;
    myStack.push(-1); // initially stack will have -1
    vector<int> answer(size);

    for (int i = size - 1; i >= 0; i--) // picking the first rightmost element first
    {
        int currentElement = arr[i];                                        // first rightmost element
        while (myStack.top() != -1 && arr[myStack.top()] >= currentElement) // if stack's element is not less than rightmost element
        {
            myStack.pop(); // then pop the element from stack
        }
        answer[i] = myStack.top(); // now myStack.top() is smaller than currentElement so now we will put that smaller value in answer vector
        myStack.push(i);           // and push that rightmost element in the stack for the next element (rightmost - 1)
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << "Next smaller element index is " << answer[i] << " " << endl;
    }

    return answer; // return vector (answer) containing all the smaller values
}

vector<int> prevSmallerElementIndex(vector<int> &arr, int size)
{
    stack<int> myStack;
    myStack.push(-1); // initially stack will have -1
    vector<int> answer(size);

    for (int i = 0; i < size; i++) // picking the first rightmost element first
    {
        int currentElement = arr[i];                                        // first rightmost element
        while (myStack.top() != -1 && arr[myStack.top()] >= currentElement) // if stack's element is not less than rightmost element
        {
            myStack.pop(); // then pop the element from stack
        }
        answer[i] = myStack.top(); // now myStack.top() is smaller than currentElement so now we will put that smaller value in answer vector
        myStack.push(i);           // and push that rightmost element in the stack for the next element (rightmost - 1)
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << "Prev smaller element index is " << answer[i] << " " << endl;
    }
    return answer; // return vector (answer) containing all the smaller values
}

int findMaxArea(vector<int> &heights)
{
    int size = heights.size(); // size of heights array

    vector<int> next(size);                        // vector for next small value that are smaller than the currentElement with size of heights.size()
    next = nextSmallerElementIndex(heights, size); // function to find the first smaller element's index in next(right side)

    vector<int> prev(size);                        // vector for prev small value that are smaller than the currentElement with size of heights.size()
    prev = prevSmallerElementIndex(heights, size); // function to find the first smaller element's index in prev(left side)

    // calculate area
    int area = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int length = heights[i];
        if (next[i] == -1) // when all the elements are same
        {

            //* explanation
            // [2, 2, 2, 2]
            // next = -1, -1, -1, -1
            // prev = -1, -1, -1, -1
            // breath = next[i] - prev[i] - 1
            // = -1 + 1 - 1 = -1
            // so area will be = heights[i] * -1 which will give -ve area
            //*end of explanation

            next[i] = size;
        }

        int breath = next[i] - prev[i] - 1; // next[i] - prev[i] - 1 is a formula to find the breath of the first small in prev and next side of the currentElement
        int newArea = length * breath;

        area = max(area, newArea);
    }

    return area;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int ans = findMaxArea(heights);

    cout << ans;

    return 0;
}