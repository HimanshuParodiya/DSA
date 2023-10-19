#include <iostream>
#include <vector>
using namespace std;

// recursion with two pointer approach
vector<int> reverseArray(vector<int> arr, int start, int end)
{
    if (start == end)
    {
        return arr;
    }

    swap(arr[start], arr[end]);

    return reverseArray(arr, start + 1, end - 1);
}
// recursion with single pointer approach

vector<char> reverseStringArray(vector<char> arr, int start, int sizeOfArray)
{
    if (start >= sizeOfArray >> 1) // sizeOfArray >> 1 ((like n/2)middle of array ) (because after the middle position no need to swap)
    {
        return arr;
    }

    swap(arr[start], arr[sizeOfArray - start - 1]);

    return reverseStringArray(arr, start + 1, sizeOfArray);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2};
    vector<char> arr1 = {'h', 'e', 'l', 'l', 'o'};

    int start = 0;
    int end = arr.size() - 1;
    int sizeOfArray = arr1.size();

    // recursion with two pointer approach
    // vector<int> ans = reverseArray(arr, start, end);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << ' ';
    // }

    // recursion with single pointer approach
    vector<char> ans1 = reverseStringArray(arr1, start, sizeOfArray);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << ' ';
    }

    return 0;
}
