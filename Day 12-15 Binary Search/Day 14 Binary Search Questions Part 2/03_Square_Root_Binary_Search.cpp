#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x)
{
    int start = 0;
    int end = x;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        long mid = start + (end - start) / 2; // Calculate the midpoint of the current range
        if (mid * mid <= x)
        {                    // Check if square of mid is less than or equal to the square root of x
            start = mid + 1; // If true, move the search range to the right half
            ans = mid;       // Update the potential answer to mid
        }
        else
        {
            end = mid - 1; // If false, move the search range to the left half
        }
    }
    if (x == 0 || x == 1)
    {
        return x;
    }

    return ans;
}

int main()
{
    int x = 8;
    int squareRoot = mySqrt(x);
    cout << "Square Root of " << x << " is " << squareRoot;
    return 0;
}