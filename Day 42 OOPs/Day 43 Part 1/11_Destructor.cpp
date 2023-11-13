#include <iostream>
using namespace std;

class Car
{
private:
    string name; // this is this -> name

public:
    int speed;
    string *carType;

    Car()
    {
        cout << "Default/simple Constructor Called" << endl;
        carType = new string;
    }

    // Parameterized Constructor
    Car(string name, int speed, string carType)
    {
        this->carType = new string(carType);
        this->name = name;   // = name is passed by argument
        this->speed = speed; // = name is passed by argument
    }

    // Destructor
    ~Car()
    {
        cout << "Destructor called" << endl;
    }

    void printName()
    {
        cout << "Car name is " << name;
    }
    void printDetails()
    {
        // cout << "Car name is " << name << " and speed is " << speed;
        // same
        cout << "Car name is " << this->name << " and speed is " << this->speed;
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

    // static
    Car car1;
    // dynamically
    Car *car2 = new Car();
    delete car2; // manual destructor call

    return 0;
}