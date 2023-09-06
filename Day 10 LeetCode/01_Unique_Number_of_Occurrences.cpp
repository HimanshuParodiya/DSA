#include <iostream>
#include <algorithm>
using namespace std;

bool printArray(int arr[], int size)
{
    int counts[size]; // vreating an array to store the Occurrences

    for (int i = 0; i < size; i++)
    {
        int count = 0; // initialize Occurrences

        // Check if the current element is already counted.
        bool counted = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                counted = true;
                break;
            }
        }

        // If the current element is not counted, count its occurrences. and add it to counts array
        if (!counted)
        {

            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            counts[i] = count;
        }

        // Sort the counts in ascending order.
        sort(counts, counts + size);

        // Check for duplicates in the sorted counts.
        for (int i = 0; i < size - 1; i++)
        {
            if (counts[i] == counts[i + 1])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int myArray[] = {6, 6, -1};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    cout << printArray(myArray, sizeOfArray);
    return 0;
}
