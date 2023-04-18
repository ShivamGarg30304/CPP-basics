#include <iostream>

using namespace std;

class bankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // - - -> r can be a value like 0.05
    bankDeposit(int p, int y, int r);   // - - -> r can be a value like 10
    void show(void);
};

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void bankDeposit::show(void)
{
    cout << endl;
    cout << "Principal amount was " << principal << endl;
    cout << "Return value after " << years << " is " << returnValue << endl;
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int P, y;
    float r;
    int R;

    bd3.show();

    cout << "Enter the value of p , y and r" << endl;
    cin >> P >> y >> r;
    bd1 = bankDeposit(P, y, r);
    bd1.show();

    cout << "Enter the value of p , y and R" << endl;
    cin >> P >> y >> R;
    bd2 = bankDeposit(P, y, R);
    bd2.show();

    return 0;
}