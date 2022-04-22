#include <iostream>

using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(){};
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
};
1 Default Visibility-mode is private.
2.Public Visibility Mode: Public members of the base class becomes public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes private members of the derived class.
4. Private members are never inherited.
    --> Private members of the base class is never becomes the members of derived class
*/

// class Programmer : Employee
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

// Creating a Derived class from Employee Base class
int main()
{
    Employee manisha(1), mahi(2);
    cout << manisha.salary << endl;
    cout << mahi.salary << endl;

    Programmer mani(1);
    cout << mani.languageCode << endl;
    mani.getData();
    return 0;
}