#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void showTriplets(vector<int> nums)
// {
//     sort(nums.begin(), nums.end());
//     int s = nums.size();
//     int i = 0;
//     int j = i + 1;
//     int k = j + 1;
//     while (i < s && j < s && k < s)
//     {
//         if (nums[i] + nums[j] + nums[k] == 0 && i != j && i != k && j != k)
//         {
//             cout << i << " " << j << " " << k << " ";
//             i++,
//                 j++;
//             k++;
//         }
//     }
// }

void showTriplets(vector<int> nums)
{

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {

        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        // cout << "i" << nums[i] << endl;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            // cout << "j" << nums[j] << endl;
            // cout << nums[j];

            for (int k = j + 1; k < nums.size(); k++)
            {
                if (k > j + 1 && nums[k] == nums[k - 1])
                    continue;
                // cout << "k" << nums[k] << endl;
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    // if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k])
                    // {
                    cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                    // }
                }
            }
        }
    }
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    showTriplets(nums);

    return 0;
}

// -4,-1,-1, 0,1,2

// i = -1 j = 0 k = 2