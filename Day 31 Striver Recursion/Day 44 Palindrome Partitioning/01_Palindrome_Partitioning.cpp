#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    // While the 'start' index is less than or equal to the 'end' index, we continue comparing characters.
    while (start <= end)
    {
        // Check if the character at 'start' is not equal to the character at 'end'.
        if (s[start++] != s[end--])
        {
            // If they are not equal, it means the string is not a palindrome, so we return 'false'.
            return false;
        }
    }
    // If we have compared all characters and found no mismatches, the string is a palindrome, so we return 'true'.
    return true;
}

void partitionHelper(int index, string s, vector<string> &path, vector<vector<string>> &ans)
{
    if (index == s.size())
    {                        // partition cross the size of string
        ans.push_back(path); // add each palindrome partition
        return;
    }
    for (int i = index; i < s.size(); ++i)
    { // we will do partition like for first 0(a,abb), then 0 to 1(aa,bb) then 0 to 2, (aab,b) and so on, So, thats why we stating from index
        if (isPalindrome(s, index, i))
        {                                                   // if string from index to i is palindrome
            path.push_back(s.substr(index, i - index + 1)); // if yes then add it to each partition from index to i + 1, if index = 0, i = 0 so , (index, i - index + 1) = (0, 0-0+1) = (0,1)
            partitionHelper(i + 1, s, path, ans);           // recursion call
            path.pop_back();                                // backtracking
        }
    }
}

int main()
{
    string s = "aab";
    vector<vector<string>> ans;       // store all the partition
    vector<string> path;              // each partition
    partitionHelper(0, s, path, ans); // recursion call

    cout << "[ ";
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}