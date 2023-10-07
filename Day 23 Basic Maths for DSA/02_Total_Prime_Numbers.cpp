#include <iostream>
#include <vector>
using namespace std;

// bool isPrime(int num)
// {
//     if (num <= 1)
//         return false;
//     if (num <= 3)
//         return true;
//     if (num % 2 == 0 || num % 3 == 0)
//         return false;

//     for (int i = 5; i * i <= num; i += 6)
//     {
//         if (num % i == 0 || num % (i + 2) == 0)
//             return false;
//     }

//     return true;
// }

// int primeCount(int num)
// {
//     int count = 0;
//     for (int i = 2; i <= num; i++)
//     {
//         if (isPrime(i))
//         {
//             count++;
//             cout << i << " ";
//         }
//     }

//     return count;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int result = primeCount(num);
//     cout << "\nCount of prime numbers: " << result;

//     return 0;
// }

// another way Sieve of Eratosthenes algorithm

// Function to count prime numbers up to a given integer n
int countPrimes(int n)
{
    // If n is less than or equal to 2, there are no prime numbers
    if (n <= 2)
        return 0;

    // Create a boolean vector to track whether each number is prime
    vector<bool> isPrime(n, true);

    // 0 and 1 are not prime, so mark them as false
    isPrime[0] = false;
    isPrime[1] = false;

    // Initialize a count to keep track of the number of prime numbers found
    int count = 0;

    // Iterate through numbers from 2 to n - 1
    for (long i = 2; i < n; i++)
    {
        // If the current number is marked as prime
        if (isPrime[i])
        {
            // Increment the count of prime numbers found
            count++;

            // Mark all multiples of the current prime number as not prime
            for (long j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the countPrimes function to find the count of prime numbers
    int result = countPrimes(num);

    cout << "\nCount of prime numbers up to " << num << ": " << result;

    return 0;
}
