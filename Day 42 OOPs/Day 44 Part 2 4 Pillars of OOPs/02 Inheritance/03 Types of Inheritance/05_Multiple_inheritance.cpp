#include <iostream>
using namespace std;

// example of Multiple inheritance took speak from human and bark from animal class
class Animal
{
public:
    string nature;
    string type;
    string category;
    string age;

    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    string color;
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid hybrid1;
    hybrid1.speak(); // due to multiple inheritance
    hybrid1.bark();  // due to multiple inheritance

    return 0;
}