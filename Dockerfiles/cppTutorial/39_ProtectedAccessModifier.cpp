#include <iostream>

using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

/*
For a Protected Member:
                 Public Derivation      	Private Derivation    	Protected Derivation
-----------------------------------------------------------------------------------------
Private members    Not Inherited              Not Inherited             Not Inherited
Protected members    Protected                   Private                  Protected
Public members        Public	                 Private                  Protected
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout << b.a; // Will not work since a is protected in both base as well as derived class

    return 0;
}