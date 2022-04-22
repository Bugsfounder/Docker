#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Manisha
{
public:
    T1 a;
    T2 b;
    Manisha(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Manisha<> m(12, 3.4);
    m.display();
    return 0;
}