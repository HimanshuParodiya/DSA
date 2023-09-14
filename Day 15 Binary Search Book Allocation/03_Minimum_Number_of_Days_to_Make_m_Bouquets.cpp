#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

pair<int, int> getMaximumAndMinimumBloomDay(vector<int> bloomDay)
{
    int maxValue = 0;
    int minValue = INT_MAX;

    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (maxValue < bloomDay[i])
        {
            maxValue = bloomDay[i];
        }
        if (minValue > bloomDay[i])
        {
            minValue = bloomDay[i];
        }
    }
    return make_pair(maxValue, minValue);
}

bool isPossibleSolution(vector<int> &bloomDay, int m, int k, int mid)
{
    int flowerCount = 0;
    int bouquets = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] < mid && flowerCount <= m)
        {
            flowerCount++;
        }
        else
        {
            bouquets++;
            flowerCount = bloomDay[i];
        }
    }
    return true;
}

int minDays(vector<int> &bloomDay, int m, int k, int maximumBloomDayValue, int minimumBloomDayValue)
{
    // binary Search
    int start = maximumBloomDayValue;
    int end = minimumBloomDayValue;
    int ans = -1;
    if (m * k > bloomDay.size())
    {
        return ans;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(bloomDay, m, k, mid))
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
int main()
{
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m = 2;
    int k = 3;

    pair<int, int> maximumBloomDay = getMaximumAndMinimumBloomDay(bloomDay);
    int maximumBloomDayValue = maximumBloomDay.first;
    int minimumBloomDayValue = maximumBloomDay.second;
    int result = minDays(bloomDay, m, k, maximumBloomDayValue, minimumBloomDayValue);

    cout << result;
    return 0;
}