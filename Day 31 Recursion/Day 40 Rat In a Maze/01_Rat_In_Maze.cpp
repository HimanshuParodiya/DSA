#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool isSafe(int newx, int newy, int n, vector<vector<int>> visited, vector<vector<int>> &m)
// {
//     // newx should be inside matrix, same with newy, next path of hashMap(visited) must be 0 and next path of given matrix should be 1;
//     if ((newx >= 0 && newx < n) && (newy >= 0 && newx < n) && visited[newx][newy] == 0 && m[newx][newy] == 1)
//     {
//         return true; // if yes then return true
//     }
//     else
//     {
//         return false; // else false
//     }
// }
// void solve(vector<vector<int>> &m, int n, vector<string> &ans, int srcx, int srcy, vector<vector<int>> visited, string path)
// {
//     // base case
//     if (srcx == n - 1 && srcy == n - 1) // if rat reaches last row and col then return path in ans
//     {
//         ans.push_back(path);
//         return;
//     }

//     visited[srcx][srcy] = 1; // mark visited path

//     // 4 Choices = D, L, R, U

//     // Down
//     int newx = srcx + 1; // increment the row
//     int newy = srcy;     // same col

//     if (isSafe(newx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path); // pass new coordinates
//         path.pop_back();
//     }

//     // Left
//     newx = srcx;     // same row
//     newy = srcy - 1; // decrement col

//     if (isSafe(newx, newy, n, visited, m))
//     {
//         path.push_back('L');
//         solve(m, n, ans, newx, newy, visited, path); // pass new coordinates
//         path.pop_back();
//     }
//     // Right
//     newx = srcx;     // same row
//     newy = srcy + 1; // increment col

//     if (isSafe(newx, newy, n, visited, m))
//     {
//         path.push_back('R');
//         solve(m, n, ans, newx, newy, visited, path); // pass new coordinates
//         path.pop_back();
//     }

//     // Up
//     newx = srcx - 1; // decrement row
//     newy = srcy;     // same col

//     if (isSafe(newx, newy, n, visited, m))
//     {
//         path.push_back('U');
//         solve(m, n, ans, newx, newy, visited, path); // pass new coordinates
//         path.pop_back();
//     }

//     // unmarked visited path
//     visited[srcx][srcy] = 0;
// }

// int main()
// {
//     vector<vector<int>> m = {{1, 0, 0, 0},
//                              {1, 1, 0, 1},
//                              {1, 1, 0, 0},
//                              {0, 1, 1, 1}};
//     int n = 4;
//     vector<string> ans;
//     if (m[0][0] == 0)
//     {
//         return -1;
//     }
//     // starting coordinates x and y
//     int srcx = 0;
//     int srcy = 0;

//     // HashMap
//     vector<vector<int>> visited = m;
//     for (int i = 0; i < n; i++)
//     { // initialize with 0
//         for (int j = 0; j < n; j++)
//         {
//             visited[i][j] = 0;
//         }
//     }

//     // each output
//     string path = "";

//     solve(m, n, ans, srcx, srcy, visited, path);

//     sort(ans.begin(), ans.end()); // we have to return answer in sorted order

//     cout << "[ ";
//     cout << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << " [ ";
//         for (int j = 0; j < ans[0].size(); j++)
//         {
//             cout << ans[i][j] << ", ";
//         }
//         cout << "]";
//         cout << endl;
//     }
//     cout << "]";

//     return 0;
// }

// use for loop to remove multiple if statements striver

void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis, int di[], int dj[])
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    string dir = "DLRU";
    for (int ind = 0; ind < 4; ind++)
    {
        int nexti = i + di[ind];
        int nextj = j + dj[ind];
        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1)
        {
            vis[i][j] = 1;
            solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
            vis[i][j] = 0;
        }
    }
}

int main()
{

    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    int n = 4;
    vector<string> ans;
    // HashMap
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    { // initialize with 0
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    int di[] = {+1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, "", visited, di, dj);

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