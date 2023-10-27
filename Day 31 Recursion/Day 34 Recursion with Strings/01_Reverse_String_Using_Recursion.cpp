#include <iostream>
using namespace std;

void reverseString(string &name, int start, int end)
{
    if (start > end)
    {
        return;
    }

    swap(name[start], name[end]);

    start++;
    end--;
    reverseString(name, start, end);
}

int main()
{
    string name = "abcd";
    int start = 0;
    int end = name.size() - 1;
    reverseString(name, start, end);

    cout << name;

    return 0;
}