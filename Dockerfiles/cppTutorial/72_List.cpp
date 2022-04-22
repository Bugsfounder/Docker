#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list<T> &lst)
{
    list<int>::iterator iter = lst.begin();
    // for (int i = 0; i < lst.size(); i++)
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst1;    // list of zero length
    list<int> lst2(7); // empty list of 7 length
    lst1.push_back(32);
    lst1.push_back(67);
    lst1.push_back(92);
    lst1.push_back(334);
    lst1.push_back(86);

    // list<int>::iterator iter = lst1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;

    display(lst1);

    list<int>::iterator iter = lst1.begin();

    *iter = 6654;
    iter++;

    *iter = 664;
    iter++;

    *iter = 654;
    iter++;

    display(lst1);

    // removing element from the list
    // lst1.pop_back();
    // lst1.pop_front();
    // lst1.remove(334);
    // display(lst1);

    // sorting the list
    lst1.sort();
    display(lst1);

    // merging the list
    lst1.merge(lst2);
    display(lst1);

    // Reversing the list
    lst1.reverse();
    display(lst1);
    return 0;
}