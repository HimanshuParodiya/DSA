#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> spiraledMatrix;
    int row = matrix.size();
    int col = matrix[0].size();

    // Indices of the 2D array
    int startingRow = 0;     // Start row index
    int endingRow = row - 1; // End row index
    int startingCol = 0;     // Start column index
    int endingCol = col - 1; // End column index

    // Initialize a count to track the number of elements added to 'spiraledMatrix'
    int countEachElement = 0;

    // Calculate the total number of elements in the 2D array
    int totalElementInArray = row * col;

    while (countEachElement < totalElementInArray)
    {
        // Traverse the top row from left to right
        for (int i = startingCol; i <= endingCol; i++)
        {
            spiraledMatrix.push_back(matrix[startingRow][i]);
            countEachElement++;
        }
        startingRow++; // Move to the next row

        // Traverse the right column from top to bottom
        for (int i = startingRow; i <= endingRow; i++)
        {
            spiraledMatrix.push_back(matrix[i][endingCol]);
            countEachElement++;
        }
        endingCol--; // Move to the previous column

        // Traverse the bottom row from right to left (if there are more rows)
        if (startingRow <= endingRow)
        {
            for (int i = endingCol; i >= startingCol; i--)
            {
                spiraledMatrix.push_back(matrix[endingRow][i]);
                countEachElement++;
            }
            endingRow--; // Move to the previous row
        }

        // Traverse the left column from bottom to top (if there are more columns)
        if (startingCol <= endingCol)
        {
            for (int i = endingRow; i >= startingRow; i--)
            {
                spiraledMatrix.push_back(matrix[i][startingCol]);
                countEachElement++;
            }
            startingCol++; // Move to the next column
        }
    }

    int spiraledMatrixRow = spiraledMatrix.size();

    for (int i = 0; i < spiraledMatrixRow; i++)
    {
        cout << spiraledMatrix[i] << " ";
    }

    return 0;
}
