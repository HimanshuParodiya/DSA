#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    for (int i = 1; i < arr.size(); i++) //
    {
        for (int j = 0; j < arr.size() - i; j++) // i = 1 so loop will go to n-1 next time last element is biggest so dont need to compare with it so next time i = 2 so loop will go from 0 to n-2
        {
            if (arr[j] > arr[j + 1]) // check for next element if current element is grater than next element then swap it
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < arr.size(); i++) //  Print the sorted elements
    {
        cout << arr[i];
    }

    return 0;
}