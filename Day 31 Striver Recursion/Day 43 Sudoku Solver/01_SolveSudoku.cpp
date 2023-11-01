#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<char>> &board, int row, int col, int c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c) // checking for entire col if c is present
        {
            return false;
        }
        if (board[row][i] == c) // checking for entire row if c is present
        {
            return false;
        }
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) // checking entire row and col together for each 3x3 box
        {
            return false;
        }
    }
    return true;
};

bool solveSudoku(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++) // iterating through board matrix row
    {
        for (int j = 0; j < board[0].size(); j++) // iterating through board matrix col
        {
            if (board[i][j] == '.') // if there is a space
            {
                for (char c = '1'; c <= '9'; c++) //  range of number we can try at each space
                {
                    if (isValid(board, i, j, c)) // can we place the c at this space
                    {
                        board[i][j] = c; // if yes then place

                        if (solveSudoku(board) == true) // if solveSudoku returning true means all the space are filled
                        {
                            return true;
                        }
                        else
                        {
                            //   backtrack
                            board[i][j] = '.';
                        }
                    }
                }
                return false; // if we can't place any number their
            }
        }
    }
    return true; // if there is no space in sudoku board then return true it's already my answer
}

int main()
{

    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    solveSudoku(board);

    // printing ans
    cout << "[ ";
    cout << endl;
    for (int i = 0; i < board.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < board[0].size(); j++)
        {
            cout << board[i][j] << ", ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}