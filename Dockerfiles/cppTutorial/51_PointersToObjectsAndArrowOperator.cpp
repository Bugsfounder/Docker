#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // c1.setData(12, 43);
    // c1.getData();

    // (*ptr).setData(12, 43); // is exactly same as
    ptr->setData(12, 43);

    // (*ptr).getData(); // is as good as
    // ptr->getData();

    // cout << ptr << endl;

    // Array of objects
    Complex *ptr1 = new Complex[4];

    ptr1->setData(12, 54);
    ptr1->getData();

    (ptr1 + 1)->setData(176, 34);
    (ptr1 + 1)->getData();

    (ptr1 + 2)->setData(56, 23);
    (ptr1 + 2)->getData();

    (ptr1 + 3)->setData(54, 76);
    (ptr1 + 3)->getData();

    return 0;
}