#include <iostream>
using namespace std;

template <class T>
class Manisha
{
public:
    int data;
    Manisha(T a)
    {
        data = a;
    }

    void display();
};

template <class T>
void Manisha<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first function" << endl;
    cout << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatized function" << endl;
    cout << a << endl;
}

int main()
{
    // Manisha<int> manisha(12);
    // cout << manisha.data << endl;
    // manisha.display();

    func(1); // Exact Match takes the highest priority
    func('M');
    return 0;
}