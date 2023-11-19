#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";

    unordered_map<char, int> frequencyS;
    unordered_map<char, int> frequencyT;

    for (char ch : s)
    {
        frequencyS[ch]++;
    }

    for (char ch : t)
    {
        frequencyT[ch]++;
    }

    cout << "{";
    for (const auto &pair : frequencyS)
    {
        cout << "'" << pair.first << "': " << pair.second << ", ";
    }
    cout << "}" << endl;
    cout << "{";
    for (const auto &pair : frequencyT)
    {
        cout << "'" << pair.first << "': " << pair.second << ", ";
    }
    cout << "}" << endl;

    if (frequencyS == frequencyT)
    {
        cout << boolalpha << true;
    }
    else
    {
        cout << boolalpha << false;
    }

    return 0;
}

//  if two strings are valid anagrams. The idea is to create two hash maps, one for each string, where you store the frequency of each character. Then, you compare the two hash maps to see if they have the same frequencies for each character.