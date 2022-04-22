#include <iostream>
using namespace std;

/*
Syntax for Initialization List in Constructor:
constructor (argument-list) : initialization-section
{
    assignment + other codes;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){
            constructor-body;
        }
};

*/
class Test
{
    int b;
    int a;
    // int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a * j)
    // Test(int i, int j) : a(i), b(b * j) // --> Not working
    // Test(int i, int j) : a(b * i), b(a * j) // --> Not working
    // Test(int i, int j) : b(j), a(i * b) // --> Not working declare b first if u want to make it work
    // Test(int i, int j) : b(j), a(i * b) // --> working if b declared first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "Value of a: " << a << endl
             << "Value of b: " << b << endl;
    }
};

int main()
{
    Test t(6, 2);
    return 0;
}