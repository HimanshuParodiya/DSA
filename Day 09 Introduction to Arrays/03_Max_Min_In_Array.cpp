#include <iostream>
using namespace std;

// - find max min in defind array
int findMaxMin(int givenArray[], int size)
{
    int Max, Min;
    Max = givenArray[0];
    Min = givenArray[0];

    cout << "Max Value is: ";

    for (int i = 1; i < size; i++)
    {
        if (givenArray[i] > Max)
        {
            Max = givenArray[i];
        }
        // instead this if we can also use predefine max min function like max(Max,givenArray[i]) max function will picke the max value between Max and givenArray[i] we also have min
        if (givenArray[i] < Min)
        {
            Min = givenArray[i];
        }
    }
    cout << Max << endl;
    cout << "Min Value is: ";
    cout << Min;
}

int main()
{
    int myArray[] = {32, 23, 542, 543, 63, -4, 46};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    findMaxMin(myArray, sizeOfArray);
    return 0;
}

// - input array and find max min

// #include <iostream>
// using namespace std;

// int findMaxMin(int givenArray[], int size)
// {
//     int Max, Min;
//     Max = givenArray[0];
//     Min = givenArray[0];

//     cout << "Max Value is: ";

//     for (int i = 1; i < size; i++)
//     {
//         if (givenArray[i] > Max)
//         {
//             Max = givenArray[i];
//         }
//         if (givenArray[i] < Min)
//         {
//             Min = givenArray[i];
//         }
//     }
//     cout << Max << endl;
//     cout << "Min Value is: ";
//     cout << Min;
// }

// int main()
// {
//     int myArray[100000];
//     int size;
//     cout << "Enter the size";
//     cin >> size;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> myArray[i];
//     }

//     // int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
//     // findMaxMin(myArray, sizeOfArray);
//     findMaxMin(myArray, size);
//     return 0;
// }