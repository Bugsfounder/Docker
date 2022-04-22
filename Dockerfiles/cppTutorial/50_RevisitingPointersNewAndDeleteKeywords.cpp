#include <iostream>
using namespace std;

int main()
{
    // Basic Example of Pointer
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is: " << *(ptr) << endl;

    // new operator
    // int *p = new int(40);
    float *p = new float(40.43);
    cout << p << endl;
    cout << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    // arr[1] = 20;
    arr[2] = 30;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;

    // delete operator
    // delete arr;
    delete[] arr;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;
}