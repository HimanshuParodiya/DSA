#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Jenny" << endl;
    }

    //'void A::sayHello()' cannot be overloaded
    // void sayHello()
    // {
    //     cout << "Hello Jay" << endl;
    // }

    // with above 2 same function we were getting an error of 'void A::sayHello()' cannot be overloaded so
    // what we can do is we can pass the string to the function

    void sayHello(string name) // now we can access both same named functions
    {
        cout << "Hello" << name << endl;
    }
};

int main()
{

    A object1;
    object1.sayHello();
    object1.sayHello("Jay");
    object1.sayHello(1);

    return 0;
}