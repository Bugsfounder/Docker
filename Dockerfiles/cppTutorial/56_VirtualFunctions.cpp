#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derive = 2;
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

    baseClassPointer = &objDerived;
    baseClassPointer->display();

    return 0;
}