#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string name = "Hello world ";
    int count = 0;

    for (int i = name.size() - 1; i >= 0; i--)
    {
        if (name[i] == ' ' && count == 0)
        {
            continue;
        }

        if (name[i] == ' ')
        {
            break;
        }

        count++;
    }
    cout << count;

    return 0;
}