#include <iostream>

using namespace std;
/*
CASE 1:
    class B: public A
    {
        // Order of execution of constructor -->first A() then B()
    };

CASE 2:
    class A: public B,public C
    {
        // Order of execution of construtor --->first B() then C and then A()
    };

CASE 2:
    class A: public B, virtual public C
    {
        // Order of execution of construtor --->first C() then B() and then A()
    };
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void print_data1(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void print_data2(void)
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void print_datad(void)
    {
        cout << "The value of derived1 is : " << derived1 << endl;
        cout << "The value of derived2 is : " << derived2 << endl;
    }
};

int main()
{
    derived shivam = {1, 2, 3, 4};
    shivam.print_data1();
    shivam.print_data2();
    shivam.print_datad();
    return 0;
}