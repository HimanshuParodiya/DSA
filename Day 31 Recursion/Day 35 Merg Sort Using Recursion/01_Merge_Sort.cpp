#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &nums, int start, int end)
{
    int mid = start + (end - start) / 2;

    int rightArrayLength = mid - start + 1;
    int leftArrayLength = end - mid;

    // creating right side array
    int *rightArray = new int[rightArrayLength];

    // creating left side array
    int *leftArray = new int[leftArrayLength];

    // copying value form nums to rightArray
    int mainArrayIndex = start;
    for (int i = 0; i < rightArrayLength; i++)
    {
        rightArray[i] = nums[mainArrayIndex++];
    }

    // copying value form nums to leftArray
    mainArrayIndex = mid + 1;
    for (int i = 0; i < leftArrayLength; i++)
    {
        leftArray[i] = nums[mainArrayIndex++];
    }

    // merge two arrays

    int indexForRightArray = 0;
    int indexForLeftArray = 0;

    mainArrayIndex = start;
    while (indexForRightArray < rightArrayLength && indexForLeftArray < leftArrayLength)
    {
        if (rightArray[indexForRightArray] < leftArray[indexForLeftArray])
        {
            nums[mainArrayIndex++] = rightArray[indexForRightArray++];
        }
        else
        {
            nums[mainArrayIndex++] = leftArray[indexForLeftArray++];
        }
    }

    // if element remain in rightArray or in leftArray

    while (indexForRightArray < rightArrayLength)
    {
        nums[mainArrayIndex++] = rightArray[indexForRightArray++];
    }
    while (indexForLeftArray < leftArrayLength)
    {
        nums[mainArrayIndex++] = leftArray[indexForLeftArray++];
    }

    // Clean up temporary arrays
    delete[] rightArray;
    delete[] leftArray;
}
void mergeSort(vector<int> &nums, int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;
    // divide left part form start to mid and sort
    mergeSort(nums, start, mid);

    // divide right part form mid to end and sort
    mergeSort(nums, mid + 1, end);

    // merge divided array
    mergeArray(nums, start, end);
}

int main()
{
    vector<int> nums = {2, 5, 1, 6, 9};

    int start = 0;
    int end = nums.size() - 1;

    mergeSort(nums, start, end);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

// comments using chatGpt

// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge two sorted subarrays into one sorted subarray
// void mergeArray(vector<int> &nums, int start, int end) {
//     int mid = start + (end - start) / 2;

//     // Calculate the lengths of the two subarrays
//     int rightArrayLength = mid - start + 1;
//     int leftArrayLength = end - mid;

//     // Create temporary arrays for the two subarrays
//     int *rightArray = new int[rightArrayLength];
//     int *leftArray = new int[leftArrayLength];

//     // Copy values from 'nums' to 'rightArray'
//     int mainArrayIndex = start;
//     for (int i = 0; i < rightArrayLength; i++) {
//         rightArray[i] = nums[mainArrayIndex++];
//     }

//     // Copy values from 'nums' to 'leftArray'
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < leftArrayLength; i++) {
//         leftArray[i] = nums[mainArrayIndex++];
//     }

//     // Merge the two subarrays into 'nums'

//     int indexForRightArray = 0;
//     int indexForLeftArray = 0;
//     mainArrayIndex = start;

//     // Compare elements from 'rightArray' and 'leftArray' and merge them into 'nums'
//     while (indexForRightArray < rightArrayLength && indexForLeftArray < leftArrayLength) {
//         if (rightArray[indexForRightArray] < leftArray[indexForLeftArray]) {
//             nums[mainArrayIndex++] = rightArray[indexForRightArray++];
//         }
//         else {
//             nums[mainArrayIndex++] = leftArray[indexForLeftArray++];
//         }
//     }

//     // If elements remain in 'rightArray' or 'leftArray', copy them into 'nums'
//     while (indexForRightArray < rightArrayLength) {
//         nums[mainArrayIndex++] = rightArray[indexForRightArray++];
//     }
//     while (indexForLeftArray < leftArrayLength) {
//         nums[mainArrayIndex++] = leftArray[indexForLeftArray++];
//     }

//     // Clean up temporary arrays
//     delete[] rightArray;
//     delete[] leftArray;
// }

// // Main function to perform merge sort on an array
// void mergeSort(vector<int> &nums, int start, int end) {

//     // Base case: if the subarray has one or zero elements, it's already sorted
//     if (start >= end) {
//         return;
//     }

//     // Calculate the middle index of the subarray
//     int mid = start + (end - start) / 2;

//     // Recursively divide and merge the left and right subarrays
//     mergeSort(nums, start, mid);
//     mergeSort(nums, mid + 1, end);

//     // Merge the divided subarrays
//     mergeArray(nums, start, end);
// }

// int main() {
//     vector<int> nums = {2, 5, 1, 6, 9};

//     int start = 0;
//     int end = nums.size() - 1;

//     // Call the mergeSort function to sort the array
//     mergeSort(nums, start, end);

//     // Print the sorted array
//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }

//     return 0;
// }
