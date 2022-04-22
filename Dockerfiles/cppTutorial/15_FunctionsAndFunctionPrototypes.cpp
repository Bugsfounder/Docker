#include <iostream>

using namespace std;

// Function Prototype
// type function-name (parameters);
// int sum(int a, int b); // Acceptable
// int sum(int a,  b); // Not-Acceptable
int sum(int, int); // Acceptable

// void g(void);
void g();

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

int main()
{
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    int add = sum(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << add << endl;

    g();

    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello, Good Morning!" << endl;
}
