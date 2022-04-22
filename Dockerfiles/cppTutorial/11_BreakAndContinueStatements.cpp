#include <iostream>

using namespace std;

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i==5)
    //     {
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}
