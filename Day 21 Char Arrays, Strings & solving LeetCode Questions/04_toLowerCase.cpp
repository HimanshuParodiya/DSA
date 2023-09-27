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

int main()
{
    string UpperCase = "WHAT";
    string lowerCase = " ";

    for (char i : UpperCase)
    {
        lowerCase += toLoweCase(i);
    }

    cout << lowerCase;

    return 0;
}