#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int height;

public:
    int age;
    int getAge()
    {
        return this->age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
};

int main()
{
    Student first;
    first.age = 22;
    first.setName("Jenny");
    cout << "Name: " << first.getName() << endl;
    cout << "Age: " << first.getAge() << endl;

    return 0;
}