#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// int main()
// {
//     vector<int> nums = {1, 3, 3, 2, 2, 4, 3, 3, 5, 5, 6, 3, 3, 7, 7};

//     int n = nums.size();

//     int elementAppearance = n / 3;
//     sort(nums.begin(), nums.end());

//     // cout << elementAppearance;
//     int count = 0;
//     vector<int> ans;

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] < nums[j])
//             {
//                 break;
//             }
//             if (nums[i] == nums[j])
//             {
//                 count++;
//                 if (count > elementAppearance)
//                 {
//                     if (ans.empty() || ans.back() != nums[i])
//                     {
//                         ans.push_back(nums[i]);
//                     }
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         // cout << ans[i] << " ";
//     }

//     return 0;
// }

// //  vector<int> majorityElement(vector<int>& nums) {
// //         int n = nums.size();

// //         // Create a map to count the occurrences of each element in the input vector.
// //         map<int, int> mp;

// //         for(int i = 0; i < n; i++) {
// //             mp[nums[i]]++;  // Increment the count for the current element in the map.
// //         }

// //         // Create a vector to store the elements that appear more than ⌊n/3⌋ times.
// //         vector<int> ans;

// //         // Iterate through the elements and their counts in the map.
// //         for(auto &i : mp) {
// //             if(i.second > (n / 3)) {
// //                 // If the count of the element is greater than ⌊n/3⌋, add it to the result vector.
// //                 ans.push_back(i.first);
// //             }
// //         }

// //         return ans;  // Return the vector of elements meeting the condition.
// //     }

int main()
{

    vector<int> nums = {1, 3, 3, 2, 2, 4, 3, 3, 5, 5, 6, 3, 3, 7, 7, 30, 30, 30};
    int n = nums.size();

    // Create a map to count the occurrences of each element in the input vector.
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++; // Increment the count for the current element in the map.
    }

    // Create a vector to store the elements that appear more than ⌊n/3⌋ times.
    vector<int> ans;

    // Iterate through the elements and their counts in the map.
    for (auto &i : mp)
    {
        if (i.second > (n / 3))
        {
            // If the count of the element is greater than ⌊n/3⌋, add it to the result vector.
            ans.push_back(i.first);
        }
    }

    return 0; // Return the vector of elements meeting the condition.
}