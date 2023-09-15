#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int end = nums.size();

    for (int i = 0; i <= end; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (nums[i] >= nums[j])
            {
                nums[i] = nums[i] ^ nums[j];
                nums[j] = nums[i] ^ nums[j];
                nums[i] = nums[i] ^ nums[j];
            }
        }
    }
    for (int i = 0; i < end; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}