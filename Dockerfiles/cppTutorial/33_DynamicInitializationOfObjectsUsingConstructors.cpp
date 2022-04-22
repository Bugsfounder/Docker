#include <iostream>

using namespace std;

class BankDeposit
{
    int principal, year;
    float interestRate, returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 4
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p, year = y, interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "Principal Amount was: " << principal << endl
         << "Return Value after " << year << " Year"
         << " is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    // BankDeposit bd1 = BankDeposit(p, y, r);
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    // BankDeposit bd2 = BankDeposit(p, y, R);
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}