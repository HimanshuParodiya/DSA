#include <iostream>
using namespace std;

int main()
{
    char name[10]; // if the length of name is 6 so after 6 every element will become null and when we will iterate it and i will reach to null it will terminate and i will not go further
    cout << "Enter your name ";
    cin >> name; // working fine but when i am writing Jenny Goldberg i am only getting Jenny

    cout << "Hello, " << name;

    return 0;
}