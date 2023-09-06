#include <iostream>
using namespace std;

//-1) this will only work when there is only one and only unique element in array (because if there are 2 unique value then after cancelling all duplicates it will do XOR with remaining element which will change the output )
int uniqueInArray(int arr[], int size)
{

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << " ";
    }

    return ans;
}

// -2) for multiple unique element
// void uniqueInArray(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         int uniqueValue = true;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 uniqueValue = false;
//                 break;
//             }
//         }
//         if (uniqueValue)
//         {
//             cout << arr[i];
//         }
//     }
// }

int main()
{
    int myArray[] = {1, 2, 3, 3, 1, 4, 4};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    cout << uniqueInArray(myArray, sizeOfArray);
    return 0;
}