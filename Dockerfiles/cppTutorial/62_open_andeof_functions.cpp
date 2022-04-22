#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is MK";
    out << "This is also manisha";
    out << "This is Manisha";
    out.close();

    ifstream in;
    in.open("sample60.txt");
    string text;

    // in >> text;
    // cout << text << endl;

    while (in.eof() == 0)
    {
        getline(in, text);
    }

    cout << text << endl;
    in.close();
    return 0;
}