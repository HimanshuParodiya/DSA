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
        // cout << "Default/simple Constructor Called";
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
};

int main()
{
    Car car1("Bugatti", 500, "Luxury");
    car1.printDetails();

    cout << endl;

    Car car2("Supra", 450, "Sports");
    car2.printDetails();

    cout << endl;
    car1 = car2;

    car1.printDetails();
    cout << endl;
    car2.printDetails();
    return 0;
}