#include <iostream>
using namespace std;

bool isEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{

    int arr1[26] = {0}; // couting each element of s1 but for now initialize it with 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int indexOfs1IthElement = s1[i] - 'a';
        arr1[indexOfs1IthElement]++; // incrementing the char of arr1[indexOfs1IthElement] index
    }

    // counting element for s2
    int i = 0;
    int windowSize = s1.length();
    int arr2[26] = {0}; // couting each element of s2 till s1(windowSize), but for now initialize it with 0
    while (i < windowSize && i < s2.length())
    {
        int indexOfs2IthElement = s2[i] - 'a';
        arr2[indexOfs2IthElement]++; // incrementing the char of arr2[indexOfs1IthElement] index
        i++;
    }

    // comapare if arr1 and arr2 is equal ?

    if (isEqual(arr1, arr2))
    {
        return 1;
    }

    // if not equal then slide window forward

    while (i < s2.length())
    { // i become 2 here
        // getting next char for our front window
        int indexOfs2IthElement = s2[i] - 'a';
        arr2[indexOfs2IthElement]++;

        // removing last char of previous window
        int oldElement = s2[i - windowSize];
        int indexOfPrevWindowLastElement = oldElement - 'a';
        arr2[indexOfPrevWindowLastElement]--;

        i++;

        // checking for current window
        if (isEqual(arr1, arr2))
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    string s2 = "eidboaoo";
    string s1 = "ab";

    bool ans = checkInclusion(s1, s2);
    cout << boolalpha << ans;

    return 0;
}