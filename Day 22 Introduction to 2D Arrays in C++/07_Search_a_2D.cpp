#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<vector<int>> matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
    {
        return false; // Matrix is empty.
    }

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int element = matrix[mid / col][mid % col]; // getting row and col

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        if (element > target)
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{

    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 60;

    bool ans = binarySearch(matrix, target);
    cout << boolalpha << ans;

    return 0;
}
