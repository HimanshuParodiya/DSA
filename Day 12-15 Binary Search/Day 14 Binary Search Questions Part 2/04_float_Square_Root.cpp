#include <iostream>
using namespace std;

int getSquareRoot(int num)
{
    int start = 0;
    int end = num;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int midSquare = mid * mid;

        if (midSquare == num)
        {
            return mid;
        }
        if (midSquare <= num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

float getSquareRootInFloat(int num, int floatValue, int squareRoot)
{
    float decimals = 1;
    float sqrt = squareRoot;
    for (int i = 0; i < floatValue; i++)
    {
        decimals = decimals / 10;

        for (float j = sqrt; j * j < num; j = j + decimals)
        {
            sqrt = j;
        }
    }
    return sqrt;
}

int main()
{

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int squareRoot = getSquareRoot(num);
    // cout << squareRoot;
    int floatValue = 3;
    float squareRootFloat = getSquareRootInFloat(num, floatValue, squareRoot);
    cout << squareRootFloat;

    return 0;
}
