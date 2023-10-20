#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 0)
    {
        return 1; // There's one way to climb 0 stairs, by not climbing.
    }
    if (n < 0)
    {
        return 0; // If n becomes negative, there are no ways to climb it.
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{

    int n = 5;

    int ways = climbStairs(n);
    cout << "There are " << ways << " ways to climb stairs";

    return 0;
}

// Problem Description

// Person 'A' wanted to go to the rooftop, so he had to climb the stairs.
// He is at 0th stair and he need to reach Nth stair.
// Each time he can climb 1 or 2 steps.
// Find the number of distinct way to reach at top

// let's say
// N = 3
// So he can climb in 3 ways
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step
