#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);

};

void Shop::setPrice(){
    cout<<"Enter id of your item number "<<counter+1<<": ";
    cin>>itemId[counter];
    cout<<"Enter Price of your item: ";
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of Item with Id "<< itemId[i] <<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();


    return 0;
}