#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting out file to mout stream
    ofstream mout("sample60.txt");

    // creating a name variable entered by the user
    string name;
    cout << "Enter Your Name: ";
    cin >> name;

    // writing a string to the file
    mout << name;

    mout.close();

    // reading a file
    ifstream min("sample60.txt");
    string content;
    min >> content;
    cout << content << endl;
    min.close();
    return 0;
}