#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id: " << id << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // general store item
    // veggies item
    // hardware item
    int size = 3;
    int p, q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item: " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item number: " << j + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}