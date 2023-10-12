// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> nums = {1, 1, 1, 2, 1};
//     int k = 3;

//         int n = nums.size();
//         int len = 0;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {

//                 int sum = 0;

//                 for (int k = i; k < j; k++)
//                 {
//                     sum += nums[k];
//                     if (sum == k)
//                     {
//                         len = max(len, j - i);
//                     }
//                 }
//             }
//         }

//     cout << len;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// int subArraySum(vector<int> &nums, int k)
// {
//     map<int, int> preSum;
//     int n = nums.size();
//     int sum = 0;
//     int maxLen = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += nums[i];

//         if (sum == k)
//         {
//             maxLen = max(maxLen, i + 1);
//         }

//         int remaining = sum - k;
//         if (preSum.find(remaining) != preSum.end())
//         {
//             int len = i - preSum[remaining];
//             maxLen = max(maxLen, len);
//         }

//         // Store the cumulative sum in the map.
//         preSum[sum] = i;
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> nums = {1, 1, 1, 1, 2, 1};
//     int k = 3;

//     int ans = subArraySum(nums, k);

//     cout << ans;

//     return 0;
// }

// Maximum SubArray

// int maxSubArray(vector<int> &nums)
// {
//     long long maxCount = INT_MIN;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         long long count = 0;
//         for (int j = i; j < n; j++)
//         {
//             // here we are not using the for loop of k to get subArray because we are ignoring the repetitive element to make sub array again and again
//             // but if we use for loop of k then it will became brute force approach right now it is better approach

//             // time complexity nearly n3 if we were using k loop
//             // time complexity right now is n2
//             count += nums[j];
//             maxCount = max(maxCount, count);
//         }
//     }

//     return maxCount;
// }

// int main()
// {
//     vector<int> nums = {1, 1, 1, 1, 2, 1};
//     int k = 3;

//     int ans = subArraySum(nums, k);

//     cout << ans;

//     return 0;
// }

int maxSubArray(vector<int> &nums)
{
    // now we will look forward for the optimal solution
    // To optimize that we will use an algorithm named Kadane's Algorithm

    // Approach itreate once and sum = 0 and if the sum with current item is < 0 (-ve) then make it 0 and take next element and sum
    //          but if the sum with current element is > 0 (+ve) than carry the sum and go to next element to sum with it

    int maxi = INT_MIN;
    long long sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum += nums[i]; // adding each element
        if (sum > maxi)
        { // if the sum is greater then maxi then padd the sum to maxi
            maxi = sum;
        }
        if (sum < 0)
        { // if the sum is -ve then make sum =0;

            sum = 0;
        }
    }
    return maxi;
}

// now imagine what is someone say Hey! you print the maxi sum but i also want the array of maxi sum🙂

int main()
{
    vector<int> nums = {1, 1, 1, 1, 2, 1};
    int k = 3;

    int ans = subArraySum(nums, k);

    cout << ans;

    return 0;
}