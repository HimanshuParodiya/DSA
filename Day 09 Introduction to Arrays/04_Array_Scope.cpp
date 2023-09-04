#include <iostream>
using namespace std;

void updateArray(int arr[], int size)
{
    cout << "Inside updateArray: " << endl;

    arr[0] = 12; // it is changing the main array to but we have seen that both are different if we change something in function it will not change in main (we have seen in function chapter pass by value ) now lets see why it change(ans at line 22)

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "updateArray done " << endl;
}

int main()
{
    int myArray[] = {1, 2, 3};
    updateArray(myArray, 3); // when we are passing myArray here we are passing address and then whatever happening inside the function, is happening with real array.

    for (int i = 0; i < 3; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}