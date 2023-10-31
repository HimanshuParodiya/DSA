#include <iostream>
#include <vector>
using namespace std;

bool isSafe1(int row, int col, vector<string> board, int n)
{ //
    // check upper diagonal '\' is there a queen
    int diagonalUpperRow = row;
    int diagonalUpperCol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
        // the above while loop is working like
        // row will go 1 level up and cal will go 1 level back
        // so the pointer will reach to upper diagonal
    }

    // check left side '<--' is there a queen
    col = diagonalUpperCol;
    row = diagonalUpperRow;
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    // check bottom diagonal '/' is there a queen
    row = diagonalUpperRow;
    col = diagonalUpperCol;
    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }

    return true; // we didn't find Q so place it
}

void placeQueens(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
    if (col == n)
    {                         // if col is over
        ans.push_back(board); // store the position of all the Q
        return;               // return recursion
    }
    for (int row = 0; row < n; row++) // Trying every row
    {
        if (isSafe1(row, col, board, n)) // is it safe to place queen in this row?
        {
            board[row][col] = 'Q';               // if yes place Q
            placeQueens(col + 1, board, ans, n); // recursion call for next Col
            board[row][col] = '.';               // when recursion is over for each recursion call and you are coming back remove all the Q (backTracking)
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<string>> ans; // storing answers
    vector<string> board(n);    // declare a vector of strings to represent the board of size n
    string s(n, '.');           // initialize s of size n with '.'
    for (int i = 0; i < n; i++)
    {
        board[i] = s; // placing '.' in board;
    }

    int col = 0; //  Start with the first column
    placeQueens(col, board, ans, n);

    // printing output
    cout << "[ ";
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << "| ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}