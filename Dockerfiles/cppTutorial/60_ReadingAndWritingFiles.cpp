#include <iostream>
#include <fstream>
using namespace std;
/*
The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
In order to work with files in c++, you will have to open it. Primarily, there are 2 ways to oepn a file:
    1. Using the constructor
    2. Using the member function open() of the class
*/
int main()
{
    string st = "Manisha is a good girl";
    string st2;
    // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); // write operation
    // out << st;

    // Opening files using constructor and reading it
    ifstream in("sample60B.txt"); // write operation
    // in >> st2;
    getline(in, st2);
    cout << st2 << endl;
    return 0;
}