#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Welcome Manisha to CPP World"<<endl;
    const int a = 12;
    // cout<<"The value of a was :"<<a<<endl;
    // a = 23; // Error Assignment of read-only variable `a`
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators
    // int x = 3, y = 678, z = 8354;

    // cout<<"The value of x without setw() is: "<<x<<endl;
    // cout<<"The value of y without setw() is: "<<y<<endl;
    // cout<<"The value of z without setw() is: "<<z<<endl;

    // cout<<"The value of x with setw() is: "<<setw(4)<<x<<endl;
    // cout<<"The value of y with setw() is: "<<setw(4)<<y<<endl;
    // cout<<"The value of z with setw() is: "<<setw(4)<<z<<endl;

    // Operator Precedence
    // int a = 3, b = 9, c = (a*5)+b;
    int a = 3, b = 9, c = ((((a*5)+b)-45)+87);

    return 0; 
}
