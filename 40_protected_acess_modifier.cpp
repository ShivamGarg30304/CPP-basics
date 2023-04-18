#include <iostream>

using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

/*
For a protected member :
                                Public derivation    private derivation    Protected derivation
    1. Private members          Not inhereted        Not inhereted         Not inhereted
    2. Protected members        Protected            Private               Protected
    3. Public members           Public               Private               Protected
*/

class derived : protected base
{
};
int main()
{
    base b;
    derived d;
    // cout << d.a; // Will not work because it is protected in both base as well as in derived class.
    return 0;
}