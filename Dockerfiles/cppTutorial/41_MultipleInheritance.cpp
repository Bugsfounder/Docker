#include <iostream>
using namespace std;

/*
// Syntax to inheriting Multiple inheritance
class DerivedC: visibility - mode base1, visibility - mode base2
{
    class body of class derivedC
};
*/

class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is: " << base1int << endl;
        cout << "The value of base2 is: " << base2int << endl;
        cout << "The sum is: " << base1int + base2int << endl;
    }
};

/*
The Inherited Derived Class looks something like this:
 Data membert:
    base1int --> protected
    base2int --> protected
 Member Functions:
    setBase1int() --> public
    setBase2int() --> public
    show() --> public

*/

int main()
{
    Derived d;
    d.setBase1int(35);
    d.setBase2int(5);
    d.show();

    return 0;
}