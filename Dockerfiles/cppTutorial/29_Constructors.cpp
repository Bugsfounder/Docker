#include <iostream>

using namespace std;

class Complex
{

    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor Declaration
    void printNumber()
    {
        cout << "your Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ---> This is a default constructor as it accepts no parameters.
{
    a = 0;
    b = 0;
}

int main()
{

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/