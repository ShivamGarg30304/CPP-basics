#include <iostream>

using namespace std;

// Syntax for inheriting in multiple inheritance
// class derived : visiblity - mode base1,visiblity - mode base2
// {
//     class body of class derived
// }
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2 // It can contain any number of classes.
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of these value is " << (base1int + base2int) << endl;
    }
};

/*
The inherited derived class look something like this:
Date members:
            base1int - - -> Protected
            base2int - - -> Protected
Member function:
            set_base1int() - - > public
            set_base2int() - - > public
            show() - - - > public
*/
int main()
{
    derived d1;
    d1.set_base1int(7);
    d1.set_base2int(3);
    d1.show();
    return 0;
}