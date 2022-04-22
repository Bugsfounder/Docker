#include <iostream>

using namespace std;

int c = 45;

int main(int argc, char const *argv[])
{
    // **************** Built in DataTypes ****************
    // int a, b, c; 

    // cout<<"Enter Number 1: ";
    // cin>>a;
    // cout<<"Enter Number 2: ";
    // cin>>b;

    // c = a + b;

    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The Global C is: "<<::c<<endl;

    // ****************float, double, and long double Literals****************
    // float d =  34.4f;
    // long double e = 34.4l;
    // cout<<"The size of d is: "<<sizeof(d)<<endl;
    // cout<<"The size of e is: "<<sizeof(e)<<endl<<endl;

    // cout<<"The size of 34.5 is: "<<sizeof(34.5)<<endl;
    // cout<<"The size of 34.5f is: "<<sizeof(34.5f)<<endl;
    // cout<<"The size of 34.5F is: "<<sizeof(34.5F)<<endl;
    // cout<<"The size of 34.5l is: "<<sizeof(34.5l)<<endl;
    // cout<<"The size of 34.5L is: "<<sizeof(34.5L)<<endl;

    // cout<<"The Value of d is: "<<d<<endl<<"The Value of e is: "<<e<<endl;

    // ****************Reference Variables****************
    // float x = 455;
    // float &y = x;
    // // float y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // x = 500;
    // cout<<y<<endl;


    // ****************TypeCasting****************
    int integerVar = 23;
    float flVar = 12.43;
    cout<<"Value of Integer Variable: "<<integerVar<<endl;
    cout<<"value of Integer Variable TypeCasting to Float: "<<(float)integerVar<<endl;
    cout<<"value of flVar TypeCasting to int: "<<(int)flVar<<endl;
    cout<<"value of flVar TypeCasting to int: "<<int(flVar)<<endl;

    int z = int(flVar);


    return 0;
}
