// OOPs - classes and objects
// c++ --> Initially called --> C with classes by stroustroup
// class --> extension of structure in (C)
// Structures had Limitations
//      - members are public
//      - No methods

// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in cpp are typedefed
// you can declare objects along with the class declaration like this:
// class Employee{
//     // class declaration
// }manisha, mahi, aryan;

// manisha.salary = 8; // makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string>

using namespace std;

class Binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void once_complement(void);
    void display();
};

void Binary::read()
{
    cout << "Enter a Binary Number: ";
    cin >> s;
}

void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "Incorrect Binary formate" << endl;
            exit(0);
        }
    }
}

void Binary::once_complement()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin();
    b.once_complement();
    b.display();

    return 0;
}
