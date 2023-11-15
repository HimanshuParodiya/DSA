#include <iostream>
using namespace std;

// example of single inheritance
class Animal
{
public:
    string nature;
    string type;
    string category;
    string age;

    void speak()
    {
        cout << "Bark bark";
    }
};

class Dog : public Animal
{
public:
    string name;
    string location;
};

int main()
{
    Dog dog1;
    dog1.speak();

    return 0;
}