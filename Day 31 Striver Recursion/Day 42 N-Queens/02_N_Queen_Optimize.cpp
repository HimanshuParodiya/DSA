#include <iostream>
#include <vector>
using namespace std;

void placeQueen(int n, int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftCheck, vector<int> &upperDiagonalCheck, vector<int> &lowerDiagonalCheck)
{
    if (col == n)
    {                         // if col is over
        ans.push_back(board); // store the position of all the Q
        return;               // return recursion
    }

    for (int row = 0; row < n; row++)
    { // Trying for every row
        if (leftCheck[row] == 0 && lowerDiagonalCheck[row + col] == 0 && upperDiagonalCheck[n - 1 + col - row] == 0)
        {                                              // Check that if the Q is attacking by left, upperDiagonal and lowerDiagonal
            board[row][col] = 'Q';                     // if not attacked the place Q
            leftCheck[row] = 1;                        // marking hashMap for left check
            lowerDiagonalCheck[row + col] = 1;         // marking hashMap for lowerDiagonal
            upperDiagonalCheck[n - 1 + col - row] = 1; // marking hashMap for upperDiagonal
            placeQueen(n, col + 1, ans, board, leftCheck, upperDiagonalCheck, lowerDiagonalCheck);

            // backTracking
            board[row][col] = '.';                     // Removing Q from board
            leftCheck[row] = 0;                        // unmarked hashMap for left check
            lowerDiagonalCheck[row + col] = 0;         //  unmarked hashMap for lowerDiagonal
            upperDiagonalCheck[n - 1 + col - row] = 0; // unmarked hashMap for upperDiagonal
        }
    }
}

int main()
{
    int n = 4;

    vector<vector<string>> ans;

    // we are initializing a 2D board
    vector<string> board(n);    // n size board
    string s(n, '.');           // [. . . .]  represent an empty row on the chessboard
    for (int i = 0; i < n; i++) // It's used to initialize the board vector with n rows
    {
        board[i] = s;
    }

    int col = 0;

    // checks for attack
    vector<int> leftCheck(n, 0);                    // creating the hashMap for left direction
    vector<int> upperDiagonalCheck((2 * n - 1), 0); // creating the hashMap for upperDiagonal direction
    vector<int> lowerDiagonalCheck((2 * n - 1), 0); // creating the hashMap for lowerDiagonal direction

    placeQueen(n, col, ans, board, leftCheck, upperDiagonalCheck, lowerDiagonalCheck);

    // printing ans
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