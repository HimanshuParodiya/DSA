#include <iostream>
#include <vector>
using namespace std;

void getCombination(string digits, vector<string> &ans, string output, int index, vector<string> &mapping)
{

    // base case
    if (index >= digits.length())
    {                          // index iterate all the elements of digits
        ans.push_back(output); // push the each recursions output
        return;                // terminate recursion
    }

    //
    int element = digits[index] - '0'; // converting digits each string to number
    string value = mapping[element];   // mapped value with buttons value

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);                              // push combination in output string
        getCombination(digits, ans, output, index + 1, mapping); // call the recursion for next combination
        output.pop_back();                                       // remove the elements from output for new recursions output
    }
}

int main()
{
    string digits = "23";

    vector<string> ans; // []
    // if (digits.length() == 0)
    // {                 // if there is nothing in digits
    // cout << "[]"; // return empty array
    // }
    string output; // each combination ""
    int index = 0; // index to track each value of button
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    getCombination(digits, ans, output, index, mapping);
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]";

    return 0;
}

// without recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<string> letterCombinations(string digits)
// {
//     if (digits.empty())
//     {
//         return {}; // Return an empty vector for an empty input
//     }

//     vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     vector<string> result = {""};

//     for (char digit : digits)
//     {
//         vector<string> newCombinations;
//         string letters = mapping[digit - '0'];

//         for (char letter : letters)
//         {
//             for (string combination : result)
//             {
//                 newCombinations.push_back(combination + letter);
//             }
//         }

//         result = newCombinations;
//     }

//     return result;
// }

// int main()
// {
//     string digits = "23";
//     vector<string> ans = letterCombinations(digits);

//     cout << "[ ";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << "]";

//     return 0;
// }
