#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = nums1.size();
    vector<int> nums2 = {2, 5, 6};
    int n = nums2.size();
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }

    for (int p = 0; p < nums1.size(); p++)
    {
        cout << nums1[p];
    }

    return 0;
}