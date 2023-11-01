#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int newx, int newy, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((newx >= 0 && newx < n) && (newy >= 0 && newx < n) && visited[newx][newy] == 0 && m[newx][newy] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<vector<int>> &m, int n, vector<string> &ans, int srcx, int srcy, vector<vector<int>> visited, string path)
{
    // base case
    if (srcx == n - 1 && srcy == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[srcx][srcy] = 1;

    // 4 Choices = D, L, R, U

    // Down
    int newx = srcx + 1;
    int newy = srcy;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Left
    newx = srcx;
    newy = srcy - 1;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // Right
    newx = srcx;
    newy = srcy + 1;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = srcx - 1;
    newy = srcy;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[srcx][srcy] = 1;
}

int main()
{
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    int n = 4;
    vector<string> ans;
    if (m[0][0] == 0)
    {
        return -1;
    }
    // starting coordinates x and y
    int srcx = 0;
    int srcy = 0;

    // HashMap
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    { // initialize with 0
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    // each output
    string path = "";

    solve(m, n, ans, srcx, srcy, visited, path);

    sort(ans.begin(), ans.end()); // we have to return answer in sorted order

    cout << "[ ";
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}