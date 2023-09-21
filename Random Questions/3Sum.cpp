#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // sorted  = {-4,-1,-1,0,1,2}

    // vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<int> nums = {1, 0, 2, -1};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        // cout << "i" << nums[i] << endl;

        for (int j = 0; j < nums.size() - 1; j++)
        {
            // cout << "j" << nums[j] << endl;
            for (int k = 0; k < nums.size(); k++)
            {
                // cout << "k" << nums[k] << endl;
                if (nums[i] + nums[j] + nums[k] == 0 && nums[i] != nums[j] != nums[k])
                {
                    cout << "nums i = " << nums[i] << " "
                         << "nums j = " << nums[j] << " nums k = "
                         << nums[k] << endl;
                }
            }
        }
    }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}