#include <iostream>

using namespace std;
// Desctructor never takes an argument nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside main function" << endl;
    cout << "Creating First Object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating Two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;
    return 0;
}