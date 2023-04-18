#include <iostream>

using namespace std;

class number
{
private:
    int a;

public:
    number() {}

    number(int num)
    {
        a = num;
    }

    // When no copy constructor id found , compilier supplies its own copy constructor.

    number(number &obj)
    {
        cout << "Copy constructor is called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(44), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // Copy constructor is invoked.
    z1.display();

    z2 = z; // Copy constructor is not invoked.
    z2.display();

    number z3 = z1; // Copy constructor is invoked.
    z3.display();
    return 0;
}