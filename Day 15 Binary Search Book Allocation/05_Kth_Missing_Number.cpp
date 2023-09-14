#include <iostream>
#include <vector>
using namespace std;

int getMaxValue(vector<int> &arr)
{
    int maxValue = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int findKthPositive(vector<int> &arr, int k)
{
    int maxValue = getMaxValue(arr);
    int limit = maxValue + k + 1;
    vector<int> newVec = {};

    for (int i = 1; i <= limit; i++)
    {
        bool found = false; // Flag to check if i is found in arr
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            // cout << i << " ";
            newVec.push_back(i);
        }
    }

       return newVec[k - 1];
}

int main()
{
    vector<int> myArr = {2, 3, 4, 7, 11};
    int k = 5;
    int ans = findKthPositive(myArr, k);
    cout << ans;

    return 0;
}