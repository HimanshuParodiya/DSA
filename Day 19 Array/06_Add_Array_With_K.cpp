#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> nums = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    // int m = nums.size();
    // int i = m - 1;
    // int k = 1;
    // int carry = 0;

    // while (i >= 0 && k > 0)
    // {
    //     int lastDigit = k % 10;
    //     int sum = nums[i] + lastDigit + carry;
    //     carry = sum / 10;
    //     sum = sum % 10;
    //     nums[i] = sum;

    //     k = k / 10;
    //     i--;
    // }

    // if (i >= 0)
    // {
    //     int lastDigit = k % 10;
    //     int sum = nums[i] + lastDigit + carry;
    //     carry = sum / 10;
    //     sum = sum % 10;
    //     nums[i] = sum;
    //     k = k / 10;
    //     i--;
    // }

    // // cout << carry;

    // if (carry != 0)
    // {
    //     int sum = carry;
    //     carry = sum / 10;
    //     sum %= 10;
    //     nums.insert(nums.begin(), sum);
    //     m++;
    // }

    vector<int> num = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int k = 1;
    int m = num.size();
    int i = m - 1;

    int carry = 0, sum;
    while (k || carry)
    {
        sum = carry + k % 10;
        k /= 10;

        if (i >= 0)
        {
            sum += num[i];
            num[i] = sum % 10;
            i--;
        }
        else
        {
            num.insert(num.begin(), sum % 10);
        }
        carry = sum / 10;
    }

    for (int p = 0; p < m; p++)
    {
        cout << num[p];
    }

    return 0;
}