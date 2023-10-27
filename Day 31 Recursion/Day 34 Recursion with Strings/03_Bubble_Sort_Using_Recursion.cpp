#include <iostream>
#include <vector>

using namespace std;

void sortArray(vector<int> &nums, int size)
{
    // base case - already Sorted
    if (size == 0 || size == 1)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++) // sorting the ith largest element at the end
    {
        if (nums[i] > nums[i + 1])
        {
            swap(nums[i], nums[i + 1]);
        }
    }

    sortArray(nums, size - 1); // now sort array except last array
}

int main()
{
    vector<int> nums = {2, 5, 1, 6, 9};
    int size = nums.size();
    sortArray(nums, size);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}