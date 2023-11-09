#include <iostream>
using namespace std;

class Car
{
    char name[100];
    int speed;
};

int main()
{
    Car car1;

    cout << "Size of car object is " << sizeof(car1);

    return 0;
}