#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(int n, int *a)
{
    int largest = a[1];
    int secondLargest = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > secondLargest)
        {
            secondLargest = a[i];
        }
    }

    return secondLargest;
}
int getSecondSmallest(int n, int *a)
{
    int smallest = a[1];
    int secondSmallest = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < smallest && a[i] > secondSmallest)
        {
            secondSmallest = a[i];
        }
    }

    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, int *a)
{
    int secondLargest = getSecondLargest(n, a);
    int secondSmallest = getSecondSmallest(n, a);

    return {secondLargest, secondSmallest};
}
int main()
{
    int arr[4] = {3, 4, 5, 2};
    int n = 4;

    vector<int> ans = getSecondOrderElements(n, arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}