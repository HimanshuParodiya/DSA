
// -------------------------------------- c++
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 33, 44};
    int k = 3;
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        // cout << (i + k) % n; // 3456012 (6%7 = 6 | 8%7 = 1 | 16%7 = 2)
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;

    for (int p = 0; p < n; p++)
    {
        cout << nums[p] << " ";
    }

    return 0;
}
