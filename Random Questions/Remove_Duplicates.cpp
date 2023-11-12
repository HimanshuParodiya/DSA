#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    cout << j;

    return 0;
}