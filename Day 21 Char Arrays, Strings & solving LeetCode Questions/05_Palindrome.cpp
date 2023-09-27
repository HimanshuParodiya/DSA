#include <iostream>
using namespace std;

char toLoweCase(char UpperCase)
{

    if (UpperCase >= 'a' && UpperCase <= 'z')
    {
        return UpperCase;
    }
    else
    {
        char temp = UpperCase - 'A' + 'a'; // to uppercase we can use lowercase - 'a' + 'A'
        // 'B' - 'A' = 64-63 = 1
        // 1 + 'a' = 'b' so B becomes b
        return temp;
    }
}

int getLength(string name)
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // increase i till last char is not null
    {
        count++;
    }

    return count;
}

bool checkPalindrome(string letter)
{
    int start = 0;
    int end = letter.size() - 1;

    while (start <= end)
    {
        if (letter[start] != letter[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string UpperCase = "NOON";
    string lowerCase = "";

    for (char i : UpperCase)
    {
        lowerCase += toLoweCase(i);
    }
    int len = getLength(lowerCase);

    bool isPalindrome = checkPalindrome(lowerCase);
    cout << boolalpha << isPalindrome;

    return 0;
}