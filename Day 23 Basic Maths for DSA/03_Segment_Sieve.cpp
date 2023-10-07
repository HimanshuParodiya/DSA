#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// // Function to count prime numbers in the range [L, R]
// int countPrimesInSegment(int L, int R)
// {
//     // Create a boolean vector to track whether each number in the segment is prime
//     vector<bool> isPrime(R - L + 1, true);

//     // Generate a list of prime numbers using the Sieve of Eratosthenes up to sqrt(R)
//     int sqrtR = static_cast<int>(sqrt(R));
//     vector<bool> isPrimeSmall(sqrtR + 1, true);
//     for (int i = 2; i <= sqrtR; i++)
//     {
//         if (isPrimeSmall[i])
//         {
//             for (int j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             {
//                 isPrime[j - L] = false;
//             }
//         }
//     }

//     // Count the prime numbers in the segment [L, R]
//     int count = 0;
//     for (int i = 0; i <= R - L; i++)
//     {
//         if (isPrime[i])
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main()
// {
//     int L, R;
//     cout << "Enter the range [L, R]: ";
//     cin >> L >> R;

//     if (L > R)
//     {
//         cout << "Invalid range: L should be less than or equal to R." << endl;
//         return 1;
//     }

//     // Call the countPrimesInSegment function to find the count of prime numbers in the range [L, R]
//     int result = countPrimesInSegment(L, R);

//     cout << "Count of prime numbers in the range [" << L << ", " << R << "]: " << result;

//     return 0;
// }

// above one is Segmented Sieve
// and below one is implementation of Sieve of Eratosthenes algorithm

int totalPrime(int n)
{

    vector<int> isPrime(n + 1, true);

    int count = 0;

    // 0 and 1 are not prime, so mark them as false
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int L = 10;
    int R = 25;
    int ans = totalPrime(L);
    int ans2 = totalPrime(R);

    int result = ans2 - ans;
    cout << result;
    return 0;
}