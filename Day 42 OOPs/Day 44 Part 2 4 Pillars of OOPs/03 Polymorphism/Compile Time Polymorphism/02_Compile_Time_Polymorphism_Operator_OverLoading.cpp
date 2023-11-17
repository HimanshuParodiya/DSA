#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Jenny" << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj) // defining operator that we want to overload and passing a value
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output is " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "Hello this is bracket";
    }
};

int main()
{

    B object1;
    B object2;

    object1.a = 4;
    object2.a = 7;

    object1 + object2;

    object1(); // calling operator() by object1
    object2(); // calling operator() by object2

    return 0;
}