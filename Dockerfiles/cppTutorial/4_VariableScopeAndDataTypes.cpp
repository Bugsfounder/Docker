#include <iostream>

using namespace std;

int global = 12;

void sum(){
    int local;
}

int main(int argc, char const *argv[])
{
    // int a = 4;
    // int b = 5;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'M';
    // bool isDrinking=false;
    bool isDrinking=true;

    cout<<"This is Tutorial for Variables and Data Types in CPP.\nHere The Value of a is: "<<a<<"\n"<<"Here the Value of b is: "<<b<<"\n"<<"The Value of PI is: "<<pi<<endl;
    cout<<"Character is: "<<c<<endl;
    cout<<"Value of isDrinking: "<<isDrinking<<endl;
    
    sum();

    cout<<global<<endl;
    // cout<<local<<endl; 
    return 0;
}
