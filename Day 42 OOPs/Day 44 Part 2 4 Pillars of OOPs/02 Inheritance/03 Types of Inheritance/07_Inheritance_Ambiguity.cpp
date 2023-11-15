#include <iostream>
using namespace std;

// example of Ambiguity Inheritance

// error: request for member 'speak' is ambiguous object1.speak();
// To remove that error We have scope resolution operator(::)

class Animal
{
public:
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    void speak()
    {
        cout << "konnichiwa" << endl;
    }
};

class C : public Animal, public Human
{
};

int main()
{
    C object1;
    // object1.speak(); this will raise an error ambiguous object

    // instead we can do this
    // object1.Animal::speak(); // barking
    object1.Human::speak(); // konnichiwa

    return 0;
}
