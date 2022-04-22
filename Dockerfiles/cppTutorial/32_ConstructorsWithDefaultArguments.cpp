#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printNumber();
};

void Simple::printNumber()
{
    cout << "Your Numbers are: " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s(12, 43);
    s.printNumber();

    Simple s2(12);
    s2.printNumber();

    return 0;
}