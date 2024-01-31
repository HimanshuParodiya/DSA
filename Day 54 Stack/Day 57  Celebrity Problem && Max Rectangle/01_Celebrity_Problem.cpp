#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool knows(vector<vector<int>> &matrix, int a, int b, int n)
{
    if (matrix[a][b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    int n = 3;

    stack<int> myStack;
    // step 1 push all element in stack
    for (int i = 0; i < n; i++)
    {
        myStack.push(i);
    }

    while (myStack.size() > 1)
    {
        int a = myStack.top();
        myStack.pop();

        int b = myStack.top();
        myStack.pop();

        if (knows(matrix, a, b, n))
        {
            myStack.push(b);
        }
        else
        {
            myStack.push(a);
        }
    }
    int potentialCandidate = myStack.top();
    // step 3 single element in stack is potential celebrity
    // so verify it
    // 1 check row
    bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (matrix[potentialCandidate][i] == 0)
        {
            zeroCount++;
        }
    }

    // check is row of potential candidate are all zeros
    if (zeroCount == n)
    {
        rowCheck = true;
    }

    // 2 check col

    bool colCheck = false;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][potentialCandidate] == 1)
        {
            oneCount++;
        }
    }

    // check is col of potential candidate are all one expect diagonal

    if (oneCount == n - 1)
    {
        colCheck = true;
    }

    if (rowCheck == true && colCheck == true)
    {
        cout << "There is a celebrity " << potentialCandidate;
    }
    else
    {
        cout << "There is no celebrity";
    }

    return 0;
};