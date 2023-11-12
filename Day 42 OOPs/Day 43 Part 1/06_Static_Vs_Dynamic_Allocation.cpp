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
    // statically
    Car car1;
    // access property using static allocation
    cout << "Name is " << car1.getName() << endl;
    cout << "Speed is " << car1.speed << endl;

    // dynamically
    Car *car2 = new Car;
    // access property using static allocation
    car2->setName("Benz");
    // or instead of *car2 we can write car2->
    // cout << "Name is " << (*car2).getName() << endl;
    cout << "Name is " << car2->getName() << endl;

    // or instead of *car2 we can write car2->
    // cout << "Speed is " << (*car2).speed << endl;
    cout << "Speed is " << car2->speed << endl;

    return 0;
}