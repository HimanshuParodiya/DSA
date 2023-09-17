#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {94, 72, 52, 46, 3}; // Given vector of integers

    int n = nums.size(); // Get the size of the vector

    for (int i = 0; i < n - 1; i++) // Loop for the sorted portion
    {
        for (int j = i + 1; j < n; j++) // loop for the unsorted portion
        {
            if (nums[i] >= nums[j]) // If the element in the sorted portion is greater than the element in the unsorted portion then swap them.
            {
                // Swap elements using XOR operator
                nums[i] = nums[i] ^ nums[j];
                nums[j] = nums[i] ^ nums[j];
                nums[i] = nums[i] ^ nums[j];
            }
        }
    }
    // cout << "Sorted array: ";
    for (int i = 0; i < n; i++) // Print the sorted elements
    {
        // cout << nums[i] << " ";
    }

    long product = (nums[n - 1] - 1) * (nums[n - 1] - 1);
    int ans = n;
    cout << ans;

    return 0;
}