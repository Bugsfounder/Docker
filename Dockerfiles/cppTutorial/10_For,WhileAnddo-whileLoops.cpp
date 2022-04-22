#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 
        Loops in cpp:
          There are three types if loops in cpp
          1. for loop
          2. while loop
          3. do-while loop
    */
    // For Loop
    // for (size_t i = 0; i < 100; i++)
    // {
    //     cout<<i+1<<endl;
    // }
    
    // While loop
    // int i = 0;
    // while (i<100)
    // {
    //     cout<<i+1<<endl;
    //     i++;
    // }
    
    // do-while loop 
    // int i = 0;
    // do
    // {
    //     cout<<i+1<<endl;
    //     i++;
    // } while (i<100);
    
    int i = 0;
    do
    {
        cout<<6<<" X "<<i+1<<" = "<<6*(i+1)<<endl;
        i++;
    } while (i<10);
    


    return 0;
}

