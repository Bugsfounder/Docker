#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The Number is: " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble x or x or y
    Number z1(x); // Copy constructor invoked
    z1.display();

    z2 = z;
    z2.display();

    Number z3 = z; // Copy constructor invoked

    return 0;
}