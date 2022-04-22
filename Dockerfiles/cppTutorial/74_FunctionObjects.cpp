#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Object: Function wrapped in a class so that it is available like an object
    int arr[] = {1, 54, 763, 89, 0, 3, 4, 12, 54, 77};
    // sort(arr, arr + 5);
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}