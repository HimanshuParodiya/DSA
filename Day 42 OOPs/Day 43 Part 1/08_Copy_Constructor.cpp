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
        // cout << "Default/simple Constructor Called";
    }

    // Parameterized Constructor
    Car(string name, int speed)
    {

        this->name = name;   // = name is passed by argument
        this->speed = speed; // = name is passed by argument
    }

    // copy constructor
    Car(Car &temp)
    {
        this->name = temp.name;
        this->speed = temp.speed;
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
    Car car1("Bugatti", 500);
    car1.printDetails();

    cout << endl;

    // copy constructor
    Car car2(car1);
    // or we can also write
    // car2.speed = car1.speed;
    car2.printDetails();
    return 0;
}