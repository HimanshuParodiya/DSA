#include <iostream>
using namespace std;

class Car
{
private:
    string name; // this is this -> name

public:
    int speed;

    Car()
    {
        cout << "Constructor Called";
    }

    // Parameterized Constructor
    Car(string name)
    {
        this->name = name; // = name is passed by argument
    }
    void printName()
    {
        cout << "Name is " << name;
    }
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
    // object created statically
    Car car1("bugatti"); // constructor called
    car1.printName();

    // Address of car1 is equal to this keyword

    // object created dynamically
    Car *car2 = new Car; // constructor called

    return 0;
}