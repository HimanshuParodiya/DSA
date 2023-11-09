#include <iostream>
using namespace std;

class Car
{
    // by default private

public: // we can access it anywhere
    string name;
    // private:
    int speed;

    void getSpeed()
    {
        cout << "The speed of the car is " << speed << " "; // we can access private inside class
    }
};

int main()
{
    Car car1;
    car1.name = "Bugatti";
    car1.speed = 400;
    cout << "Car name is " << car1.name << endl;
    car1.getSpeed();
    cout << "km/h";

    return 0;
}