#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Manisha is a good girl."<<endl;

    int age;
    cout<<"Tell me your age: "; 
    cin>>age;
    
    // Selection control structure: if else-if else ladder
    if(age<18&&age>0){
        cout<<"You cannot come to my party."<<endl;
    }else if(age==18){
        cout<<"you are a kid and you get a kid pass to the party"<<endl;
    }else if(age<0){
        cout<<"You are not yet born."<<endl;
    } else{
        cout<<"You can come to the party."<<endl;
    }


    // Selection control structure: switch-case statements
    int day ;
    cout<<"Enter day in Number: ";
    cin>>day;

    switch (day)
    {
    case 0:
        cout<<"Sunday"<<endl;
        break;
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    default:
        break;
    }


    return 0;
}
