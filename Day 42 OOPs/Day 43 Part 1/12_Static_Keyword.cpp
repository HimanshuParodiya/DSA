#include <iostream>
using namespace std;

class Car
{
private:
    string name; // this is this -> name

public:
    int speed;
    string *carType;
    static int timeToComplete;

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
    static int random()
    {
        // cout << this->speed << endl; // 'this' is unavailable for static member functions
        // cout << speed << endl; // note: declared here int speed;
        return timeToComplete; // we can access timeToComplete
    }
    // Destructor
    ~Car()
    {
        cout << "Destructor called" << endl;
    }
};

// initialize timeToComplete

int Car::timeToComplete = 5;

int main()
{

    // static is independent so we don't need to create object to use timeToComplete
    cout << Car::timeToComplete; // 5
    cout << Car::random();       // 5
    return 0;
}