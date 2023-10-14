#include <iostream>
using namespace std;

// pass by value
// void update(int i)
// {

//     i++;
// }

// int main()
// {

//     int i = 5;

//     cout << i;
//     update(i);
//     cout << i; // i is still 5 because update function is working with pass by value(here we create a copy) so both i are different

//     return 0;
// }

// pass by reference
void update(int &i)
{

    i++;
}

int main()
{

    int i = 5;

    cout << i; // 5
    update(i);
    cout << i; // 6

    return 0;
}
