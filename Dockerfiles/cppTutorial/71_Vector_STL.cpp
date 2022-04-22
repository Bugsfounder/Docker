#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    vector<int> vec1; // zero length integer vector
    int element,
        size;

    // cout << "Enter the size of vector: ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add into vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // display(vec1);
    // vec1.pop_back();

    // vector<int>::iterator iter = vec1.begin();

    // vec1.insert(iter + 1, 499);
    // vec1.insert(iter + 1, 5, 499);

    // display(vec1);

    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('4');
    // display(vec2);

    // vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3s
    cout << "Displaying this vector" << endl;
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}