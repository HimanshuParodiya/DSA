#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = arr.size();
    for (int i = 1; i < n; i++) // Print the sorted elements
    {
        int j = i - 1;      // i = 1 / j = 0
        int start = arr[i]; // start = 2
        for (; j >= 0; j--)
        {

            if (arr[j] > start) // arr[0] > start / 6 > 2 //
            {
                // shift
                arr[j + 1] = arr[j]; // arr[1] = arr[0] / 2 = 6 array become  {6, 6, 8, 4, 10}
            }
            else
            {
                // when j < start
                // exit loop because 2nd time
                break;
            }
        }
        //  {6, 6, 8, 4, 10}
        // j become -1 because j was 0 and j-- make it -1
        // j + 1  = -1 + 1 == arr[0] == 6
        // start was arr[i] (i = 1)
        arr[j + 1] = start; // arr[0] = 2  array becomes {2, 6, 8, 4, 10}
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
