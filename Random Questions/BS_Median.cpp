#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(vector<int> nums1, vector<int> nums2)
{
    vector<int> nums3(nums1.size() + nums2.size()); // Initialize nums3 with the correct size
    int i = nums1.size() - 1;
    int j = nums2.size() - 1;
    int k = nums3.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums3[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums3[k] = nums2[j];
            j--;
            k--;
        }
    }

    // Handle any remaining elements in nums1 or nums2
    while (i >= 0)
    {
        nums3[k] = nums1[i];
        i--;
        k--;
    }

    while (j >= 0)
    {
        nums3[k] = nums2[j];
        j--;
        k--;
    }

    return nums3;
}

float findMedian(vector<int> newArray)
{
    int start = 0;
    int end = newArray.size() - 1;
    double ans = -1;

    int mid = start + (end - start) / 2;
    // cout << newArray[mid];

    if (newArray.size() % 2 == 0)
    {
        ans = static_cast<double>(newArray[mid] + newArray[mid + 1]) / 2;
        // cout << "even" << ans;
        return ans;
    }
    else
    {
        ans = newArray[mid];
        // cout << "odd" << ans;
        return ans;
    }
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    vector<int> newArray = mergeArray(nums1, nums2);
    double median = findMedian(newArray);
    cout << median;
    return 0;
}

// 1, 2, 3, 4