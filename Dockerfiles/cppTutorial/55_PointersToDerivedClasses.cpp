#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derive;
    void display()
    {
        cout << "Displaying derive class variable: " << var_derive << endl;
    }
};

int main()
{
    BaseClass *baseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;

    // baseClassPointer = &objDerived; // Pointing to Base class pointer to derive class

    // baseClassPointer->var_base = 123;
    // // baseClassPointer.var_derive = 43; // Not Working
    // baseClassPointer->display();

    DerivedClass *deriveClassPointer = &objDerived;
    deriveClassPointer->var_base = 54;
    deriveClassPointer->var_derive = 894;
    deriveClassPointer->display();

    return 0;
}