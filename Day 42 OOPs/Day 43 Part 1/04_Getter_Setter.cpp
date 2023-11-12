#include <iostream>
using namespace std;

class Car
{
private:
    string name;

public:
    int speed;

    string getName()
    {
        return name;
    }

    int get_speed()
    {
        return speed;
    }

    void setName(string ArgumentName)
    {
        name = ArgumentName;
    }
    void setSpeed(int ArgumentSpeed)
    {
        name = ArgumentSpeed;
    }
};

int main()
{
    Car car1;

    // Error note: declared private here string name;
    // car1.name = "Hello";
    // cout << car1.name;

    // so how can i assess the name
    // so we can assess it by getting and set it's value by setter

    // getter

    cout << "The name of the car is " << car1.getName() << endl; // initially empty

    // setter
    car1.setName("Bugatti");

    // getting name using getter after updating name using setter
    cout << "The name of the car after using setter is " << car1.getName() << endl;

    return 0;
}