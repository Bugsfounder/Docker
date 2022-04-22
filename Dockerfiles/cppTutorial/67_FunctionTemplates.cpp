#include <iostream>
using namespace std;

// float funcAvg(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAvg2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float a;
    // a = funcAvg(4, 67);

    // cout << a << endl;
    // printf("The average of these number is: %.3f\n", a);

    float a;
    a = funcAvg(5, 5.4);
    cout << a << endl;
    printf("The average of these number is: %.3f\n", a);

    int x = 34, y = 89;
    swapp(x, y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}