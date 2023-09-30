#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int size = chars.size();
    int index = 0; // index to manipulate Chars vector

    while (i < size)
    {
        int j = i + 1;
        while (j < size && chars[i] == chars[j])
        {        // traverse j till each char is same
            j++; // count total occurrence till next new char
        }

        chars[index++] = chars[i]; // 1st char should be a char that we have counted

        int charCount = j - i;

        if (charCount > 1)
        {                                             // charCount should be more than 1 otherwise no need to show count
            string totalCount = to_string(charCount); // converting charCount to string

            // now if charCount is 12 then we have to make it "1" "2"
            // for that
            for (char ch : totalCount)
            {
                chars[index++] = ch;
            }
        }

        i = j; // start counting from new char
    }

    return index; // returning size of chars that comes after becoming something like ["a","2","b","2","c","3"]
}

int main()
{

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int ans = compress(chars);
    cout << ans;

    return 0;
}