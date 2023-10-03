#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    sort(str.begin(), str.end());

    // for (string ch : str)
    // {

    //     cout << ch << " ";
    // }

    cout << str;

    return 0;
}