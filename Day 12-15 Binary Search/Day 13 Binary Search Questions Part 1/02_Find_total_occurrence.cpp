#include <iostream>
#include <vector>
using namespace std;

int firstPosition(vector<int> arr, int size, int target)
{
    int start = 0;                // starting index
    int end = size - 1;           // last index
    int mid = (start + end) >> 1; // mid index
    int ans = -1;                 // initial value
    while (start <= end)
    {
        if (arr[mid] == target)
        {                  // if element(arr[mid]) === target
            ans = mid;     // pass the index to ans variable
            end = mid - 1; // now check, the index we got above do we have any same element before that index
        }
        else if (arr[mid] < target)
        {                    // if element is smaller than target then check after that element
            start = mid + 1; // increment the start
        }
        else
        {
            end = mid - 1; // if element is bigger than target then check befor that element
        }

        mid = (start + end) >> 1; // get new value of mid
    }

    return ans;
}

// finding the last position of an element
int lastPosition(vector<int> arr, int size, int target)
{
    int start = 0;                       // starting index
    int end = size - 1;                  // last index
    int mid = start + (end - start) / 2; // mid index
    int ans = -1;                        // initial value
    while (start <= end)
    {
        if (arr[mid] == target)
        {                    // if element(arr[mid]) === target
            ans = mid;       // pass the index to ans variable
            start = mid + 1; // now check, the index we got above do we have any same element after that index
        }
        else if (arr[mid] < target)
        {                    // if element is smaller than target then check after that element
            start = mid + 1; // increment the start
        }
        else
        {
            end = mid - 1; // if element is bigger than target then check befor that element
        }

        mid = start + (end - start) / 2; // get new value of mid
    }

    return ans;
}

int main()
{

    vector<int> myVector = {1, 2, 3, 4, 4, 4, 5};
    int size = myVector.size();
    int key = 4;

    int totalOccurrence = ((lastPosition(myVector, size, key) - firstPosition(myVector, size, key)) + 1);
    // vector<int> ans = firstAndLastPosition(firstPositionValue, secondPositionValue);
    cout << totalOccurrence;

    return 0;
}

// Approach we have to find the total occurrence of an given key
// find first and last position of an element

// to get the total occurrence = (lastPosition - firstPosition) + 1
