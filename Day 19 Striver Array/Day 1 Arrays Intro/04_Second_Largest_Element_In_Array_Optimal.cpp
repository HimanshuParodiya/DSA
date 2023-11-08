#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 1, 6, 8, 5};
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest; // storing the previous largest value in secondLargest
            largest = arr[i];        // passing current largest to largest
        }
        else if (arr[i] > secondLargest && arr[i] < largest) // If arr[i] is not greater than longest but is greater than secondLongest, we update secondLongest
        {
            secondLargest = arr[i];
        }
    }

    cout << "largest: " << largest << endl;
    cout << "Second largest: " << secondLargest << endl;

    return 0;
}
