#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subSetSum(vector<int> &arr, int n, int index, int sum, vector<int> &subSets)
{
    if (index == n)
    {
        subSets.push_back(sum);
        return;
    }

    // pick up the element
    subSetSum(arr, n, index + 1, sum + arr[index], subSets);
    // Do not pick up the element
    subSetSum(arr, n, index + 1, sum, subSets);
}
int main()
{

    vector<int> arr = {3, 1, 2};
    int n = 3;

    vector<int> subSets;
    int index = 0;
    int sum = 0;
    subSetSum(arr, n, index, sum, subSets);
    sort(subSets.begin(), subSets.end());

    for (int i = 0; i < subSets.size(); i++)
    {
        cout << subSets[i] << " ";
    }

    return 0;
}