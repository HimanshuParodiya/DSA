#include <iostream>
using namespace std;

int main()
{

    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    int arr[26] = {0}; // here now a to z = 0

    for (int i = 0; i < s.length(); i++) // counting occurrence of each charater
    {
        // int count = 0;
        // count = s[i] - 'a'; // right now we are supposing that string (s) will always contain small letter ......... let say s[i] = b so b - a = 1
        // arr[count]++;       // arr[count] = arr[1] = b = 1

        // now i will check for capital letter and small letter

        int count = 0;

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count = s[i] - 'a';
        }
        else
        {

            count = s[i] - 'A';
        }
        arr[count]++; // arr[count] = arr[1] = b = 1
    }

    int maxOcc = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxOcc) // after counting occurrence of each charater if current count is greater than maxOcc then
        {
            ans = i;         // pass the index of char to ans and
            maxOcc = arr[i]; // pass the count to maxOcc
        }
    }

    char finalChar = 'a' + ans; // give us char ..... let say ans = 2 .......... 'a' + 2 = c

    cout << finalChar; // Output the reversed string

    return 0;
}
