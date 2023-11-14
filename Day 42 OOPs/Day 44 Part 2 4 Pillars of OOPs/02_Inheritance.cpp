#include <iostream>
using namespace std;

class Human
{
private:
    int weight;

public:
    int height;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
    int getWeight()
    {
        return this->weight;
    }
};

class Male : public Human
{
public:
    string color;
    string nature;
    string fav;

    void maleFav()
    {
        cout << "Favorite thing is " << fav;
    }
};

int main()
{
    Male male1;
    male1.weight; // can't access because it is private
    male1.fav = "cars";
    male1.maleFav(); // i am getting all the properties of the Human's class also
    // accessing Human properties in male
    male1.age = 22;
    male1.setWeight(300);
    cout << endl;
    cout << "Weight is " << male1.getWeight() << "lbs";
    cout << endl;
    cout << "Age is " << male1.age << " years";

    return 0;
}