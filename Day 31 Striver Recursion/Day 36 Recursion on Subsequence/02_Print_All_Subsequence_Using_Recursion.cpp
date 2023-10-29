#include <iostream>
#include <vector>

using namespace std;

// void printVector(const vector<char> &v)
// {
//     for (char num : v)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
// }

void getSubsequence(string &arr, int index, vector<char> &ans)
{
    if (index >= arr.size())
    {
        // printVector(ans); // Print the subsequence
        return;
    }
    getSubsequence(arr, index + 1, ans); // solve non pick side

    ans.push_back(arr[index]);

    getSubsequence(arr, index + 1, ans); //  solve pick side
    ans.pop_back();
}

int main()
{
    string s = "ABC";
    vector<char> ans;
    int index = 0;

    getSubsequence(s, index, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity 2^n * n