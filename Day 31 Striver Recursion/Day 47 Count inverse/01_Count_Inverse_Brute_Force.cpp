#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 3, 5, 1};
    vector<vector<int>> allPairs;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > 2 * arr[j])
            {
                vector<int> pairs = {arr[i], arr[j]};
                allPairs.push_back(pairs);
            }
        }
    }

    cout << "[ ";
    cout << endl;
    for (int i = 0; i < allPairs.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < allPairs[0].size(); j++)
        {
            cout << allPairs[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}