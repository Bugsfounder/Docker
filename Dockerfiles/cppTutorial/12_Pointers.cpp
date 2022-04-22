#include <iostream>

using namespace std;

int main()
{
    // what is pointer? ---> pointer is a data type which holds the address of the other data types
    
    int a = 3;
    int *b = &a;
    cout<<b<<endl;

    // & --> (address of) Operator 
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    // * -->  (value at) Dereference Operator  
    cout<<"The value at address b is: "<<*b<<endl;

    // Pointer to Pointer
    int **c = &b;
    int ***d = &c; 
    int ****e = &d;

    cout<<"The address b is: "<<&b<<endl;
    cout<<"The address b is: "<<c<<endl;
    cout<<"The address c is: "<<d<<endl;

    cout<<"The value at c is: "<<*c<<endl; // address
    cout<<"The value at c is: "<<**c<<endl; // value
    cout<<"The value at d is: "<<***d<<endl; // value
    cout<<"The value at e is: "<<****e<<endl; // value

    cout<<c<<endl;
    cout<<&b<<endl;

    cout<<*c<<endl;
    cout<<&a<<endl;
    // cout<<"The value at e is: "<<**e<<endl; // value
    // cout<<"The value at e is: "<<****e<<endl; // value


    return 0;
}
