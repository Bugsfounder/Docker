#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map<string, int> mymap;
    // mymap["id"] = 1;
    // mymap["roll"] = 54;
    // for (std::map<string, int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
    // {
    //     std::cout << it->first << " => " << it->second << '\n';
    // }

    map<string, int> marks;

    marks["manisha"] = 97;
    marks["mahi"] = 99;
    marks["ram"] = 100;

    for (std::map<string, int>::iterator it = marks.begin(); it != marks.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}