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

    Complex(int, int); // Constructor Declaration
    void printNumber()
    {
        cout << "your Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int a1, int b1) // ---> This is a parameterized constructor as it accepts 2 parameters.
{
    a = a1;
    b = b1;
}

int main()
{
    // Implicit Call
    // Complex a(1, 2);

    // Explicit call
    Complex a = Complex(5, 23);
    Complex b = Complex(5, 89);
    a.printNumber();
    b.printNumber();

    return 0;
}