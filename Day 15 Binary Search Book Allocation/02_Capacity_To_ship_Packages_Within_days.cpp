#include <iostream>
#include <vector>
using namespace std;

int getTotalWeight(vector<int> weights)
{
    int totalWeight = 0;

    for (int i = 0; i <= weights.size() - 1; i++)
    {
        totalWeight += weights[i];
    }
    return totalWeight;
}

bool isPossible(vector<int> weights, int days, int mid)
{
    int daysCount = 1;
    int perDayWeight = 0;

    for (int i = 0; i < weights.size(); i++)
    {
        if (perDayWeight + weights[i] <= mid)
        {
            perDayWeight += weights[i];
        }
        else
        {
            daysCount++;
            if (daysCount > days || weights[i] > mid)
            {
                return false;
            }
            perDayWeight = weights[i];
        }
    }

    return true;
}

int binarySearch(vector<int> weights, int days, int totalWeight)
{
    int start = 0;
    int end = totalWeight;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(weights, days, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int shipWithinDays(vector<int> &weights, int days)
{

    int totalWeight = getTotalWeight(weights);
    int result = binarySearch(weights, days, totalWeight);
    return result;
}

int main()
{

    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int result = shipWithinDays(weights, days);
    cout << result;
    return 0;
}