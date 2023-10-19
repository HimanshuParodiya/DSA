#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int sizeOfString)
{
    if (start >= sizeOfString >> 1) // if start become more then the mid of sting that means string is palindrome
    {
        return true;
    }

    if (tolower(str[start]) != tolower(str[sizeOfString - start - 1]))
    { // if anywhere it finds that chars are not equal it will return false and will not recursion will not go further
        return false;
    }

    // if (tolower(str[start]) == tolower(str[sizeOfString - start - 1])) // if chars are matching then keep go until you reach to the base case
    // {
    return checkPalindrome(str, start + 1, sizeOfString);
    // }
}

int main()
{

    string str = "Madam";
    int sizeOfString = str.size();
    int start = 0;

    bool ans = checkPalindrome(str, start, sizeOfString);

    cout << boolalpha << ans;

    return 0;
}