#include <iostream>
#include <vector>
using namespace std;

// bool binarySearch(vector<vector<int>> matrix, int target, int row, int col)
// {
//     int end = col - 1;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = end; j >= 0; j--)
//         {
//             int element = matrix[i][j];
//             if (element == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

bool searchMatrix(vector<vector<int>> &matrix, int target, int row, int col)
{
    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }

    return 0;
}
int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

    int row = matrix.size();
    int col = matrix[0].size();

    int target = 5;

    // bool ans = binarySearch(matrix, target, row, col);
    bool ans = searchMatrix(matrix, target, row, col);

    cout << boolalpha << ans;

    return 0;
}