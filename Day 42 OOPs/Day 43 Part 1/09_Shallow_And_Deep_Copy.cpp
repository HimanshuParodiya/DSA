#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    string name;

public:
    int speed;
    // char carType[100]; // this is not a good practice so we are give it memory from heap below
    char *carType;
    Car()
    {
        cout << "Default constructor called" << endl;
        carType = new char[100];
    }

    // create custom copy constructor to create deep copy
    Car(Car &temp)
    {
        cout << "Custom Copy constructor is called " << endl;
        char *ch = new char[strlen(temp.carType) + 1]; // create ch char of size carType
        strcpy(ch, temp.carType);                      // copy the carType in ch
        this->carType = ch;

        this->name = temp.name;
        this->speed = temp.speed;
    }

    void setType(char carType[])
    {
        strcpy(this->carType, carType); // This line copies the content of the carType parameter passed to the function into the carType member
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
    void details()
    {
        cout << endl;
        cout << "[ Name of the car is " << this->name << ", ";
        cout << "Speed of the car is " << this->speed << "Km/h , ";
        cout << "Type of the car is " << this->carType << " ]" << endl;
    }
};

int main()
{

    Car car1;

    car1.setName("Bugatti");
    car1.speed = 200;
    char carTypeVariable[10] = "classA";
    car1.setType(carTypeVariable);
    car1.details();

    // use default copy constructor to create another car

    Car car2(car1);
    car2.details();

    // now let's change the carType of car1

    char carTypeVariable1[10] = "classAB";
    car1.setType(carTypeVariable1);
    car1.details();

    // now let's print the details of car2
    car2.details();
    // why does the carType of car2 is changing?

    return 0;
}