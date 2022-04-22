#include <iostream>

using namespace std;

class Employee{

    static int count;
    int id;

    public:
        void setData(void){
            cout<<"Enter the Id: "; 
            cin>>id; 
            count++;
        }
        void getData(){
            cout<<"The Id of the Employee is: "<< id<<" and this is employee number count: "<<count<<endl;
        }

        static void getCount(void){
            // cout<<id; // throws an error
            cout<<"The Value of count is: "<<count<<endl;
        }
};

// Static Data Member of class Employee
// int Employee :: count = 1000; // default value is 0
int Employee :: count; // default value is 0

int main()
{
    Employee manisha, mahi, mani;
    // manisha.id = 1; 
    // manisha.count = 0;    // cannot do this as id and count is private
    
    manisha.setData();
    manisha.getData();
    Employee::getCount();
    
    mahi.setData();
    mahi.getData();
    Employee::getCount();

    mani.setData();
    mani.getData();
    Employee::getCount();

    return 0;
}