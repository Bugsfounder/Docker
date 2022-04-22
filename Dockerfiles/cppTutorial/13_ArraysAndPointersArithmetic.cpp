#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ***** Array example *******
    // int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // for (int i = 0; i < 12; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // int marks[5] = {56,54,89,76,78};
    int marks[] = {56,54,89,76,78};
    int marksMath[4];
    marksMath[0] = 43;
    marksMath[1] = 78;
    marksMath[2] = 26;
    marksMath[3] = 79;
    marksMath[4] = 56;
    marksMath[5] = 56;
    marksMath[6] = 56;
    marksMath[7] = 56;

    // cout<<"These are marks math"<<endl;
    // cout<<marksMath[0]<<endl;
    // cout<<marksMath[1]<<endl;
    // cout<<marksMath[2]<<endl;
    // cout<<marksMath[3]<<endl;
    // cout<<marksMath[4]<<endl;
    // cout<<marksMath[5]<<endl;
    // cout<<marksMath[6]<<endl;
    // cout<<marksMath[7]<<endl;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    int ptrArr[] = {12,43,54,23,43};
    // cout<<ptrArr<<endl;
    // for (int i = 0; i < sizeof(ptrArr)/sizeof(ptrArr[0]); i++)
    // {
    //     cout<<ptrArr[i]<<endl;
    // }

    // ***** Pointer arithmetic *******
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of *(p) is : "<<*(p)<<endl;
    // cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) is: "<<*(p+4)<<endl;
    
    
    return 0;
}
