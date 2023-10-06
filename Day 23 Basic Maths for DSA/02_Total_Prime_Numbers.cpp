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

int countPrimes(int n)
{
    if (n <= 2)
        return 0; // No prime numbers less than 2

    vector<bool> isPrime(n, true);

    isPrime[0] = false;
    isPrime[1] = false;
    int count = 0;

    for (long i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
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

    int result = countPrimes(num);
    cout << "\nCount of prime numbers: " << result;

    return 0;
}
