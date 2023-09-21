#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};

    int negative = 0;
    int positive = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == 0)
        {
            continue;
        }
        else if (nums[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    int maxValue = max(negative, positive);

    cout << maxValue;

    return 0;
}