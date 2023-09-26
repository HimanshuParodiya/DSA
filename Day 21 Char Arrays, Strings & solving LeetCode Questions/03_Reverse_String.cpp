#include <iostream>
using namespace std;

void reverseString(char name[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // increase i till last char is not null
    {
        count++;
    }

    return count;
}

int main()
{
    char name[10]; // if the length of name is 6 so after 6 every element will become null and when we will iterate it and i will reach to null it will terminate and i will not go further
    cout << "Enter your name ";
    cin >> name; // working fine but when i am writing Jenny Goldberg i am only getting Jenny
    int len = getLength(name);
    cout << "Length of your name is " << len;
    cout << " Reverse of " << name;
    reverseString(name, len);
    cout << " is " << name;

    // cout << "Hello, " << name;
    return 0;
}