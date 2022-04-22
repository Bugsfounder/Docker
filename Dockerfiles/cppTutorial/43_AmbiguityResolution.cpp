#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet(void)
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello Manisha" << endl;
    }
};

class D : public B
{
    int a;

public:
    // D's new say() method will override base class's say() method
    void say()
    {
        cout << "Hello Manisha From D" << endl;
    }
};

int main()
{
    // Ambiguity 1
    // Base1 base1Obj;
    // Base2 base2Obj;

    // base1Obj.greet();
    // base2Obj.greet();

    // Derived d;
    // d.greet();

    // Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}