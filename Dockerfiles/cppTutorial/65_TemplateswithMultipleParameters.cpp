#include <iostream>
using namespace std;

/*
    template <class T1, class T2>
    class nameOfClass{
        // class body
    }
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    // myClass<int, char> obj(3, 'M');
    myClass<int, float> obj(3, 1.8);

    obj.display();
    return 0;
}