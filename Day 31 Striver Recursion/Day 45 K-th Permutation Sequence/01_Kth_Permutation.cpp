#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;
    int k = 3;
    int fact = 1;
    vector<int> numbers;

    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
        numbers.push_back(i);
    } // create the numbers array till n, n = 4 = numbers = {1,2,3} and getting the factorial 3!

    numbers.push_back(n); // adding last value in numbers (we can also do i<= n, so this value will also can in numbers vector in above loop but above we want factorial of rest (notes of striver recursion file 45) )

    string ans = ""; // storing kth permutation

    k = k - 1; // in case of 0-base indexing

    while (true)
    {
        ans = ans + to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + (k / fact));
        if (numbers.size() == 0)
        {
            break;
        }
        k = k % fact;
        fact = fact / numbers.size();
    }

    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }

    // cout << fact;

    return 0;
}