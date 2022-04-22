#include <iostream>

using namespace std;

class C2;

class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(C1 &a, C2 &b)
{
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    C1 oc1;
    C2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);

    cout << "The Value of oc1 after exchanging becomes: ";
    oc1.display();
    cout << "The Value of oc2 after exchanging becomes: ";
    oc2.display();

    return 0;
}