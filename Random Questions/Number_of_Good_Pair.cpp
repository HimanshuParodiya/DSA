#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}