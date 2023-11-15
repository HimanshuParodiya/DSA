#include <iostream>
using namespace std;

// example of Multi_level inheritance
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

class siberianHusky : public Dog
{
};

int main()
{
    siberianHusky dog2;
    dog2.speak(); // due to multilevel inheritance

    return 0;
}