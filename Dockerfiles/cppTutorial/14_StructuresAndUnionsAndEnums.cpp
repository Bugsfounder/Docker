#include <iostream>

using namespace std;

// struct employee
// {
//     int eId;
//     float salary;
//     char favChar;
//     bool isProgrammer;
// };

typedef struct employee
{
    int eId;
    float salary;
    char favChar;
    bool isProgrammer;
} emp;

union money
{
    int rice;
    char car;
    float pounds;
};

enum Meal
{
    breakfast,
    lunch,
    dinner
};

int main()
{
    // STRUCTURE
    // struct employee manisha;
    emp manisha;
    manisha.eId = 1;
    manisha.favChar = 'M';
    manisha.isProgrammer = true;
    manisha.salary = 50000000000;

    cout << manisha.eId << endl;
    cout << manisha.favChar << endl;
    cout << manisha.isProgrammer << endl;
    cout << manisha.salary << endl;

    // UNION --> use only one at a time
    union money m1;
    m1.rice = 12;

    cout << m1.rice << endl;

    // ENUM
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}
