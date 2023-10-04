#include <iostream>
// #include <vector>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();
    // better approach
    cout << n;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]); // Swap elements across the main diagonal
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end()); // reverse each row
    }

    // brute force

    // vector<vector<int>> ans(n, vector<int>(n));

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[j][n - 1 - i] = matrix[i][j];
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[0].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << "n";
    // }

    return 0;
}