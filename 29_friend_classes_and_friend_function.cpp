#include <iostream>

using namespace std;
class complex;

// Forword decleration.
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumImgcomplex(complex, complex);
};

class complex
{
    int a, b;
    // Individual decalaring function as friends.
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumImgcomplex(complex o1, complex o2);

    // Aliter : Declaring the entire class as a friend.
    friend calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber(void)
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumImgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 5);
    c2.setNumber(2, 4);

    calculator calc;
    int real = calc.sumrealcomplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is : " << real << endl;
    int img = calc.sumImgcomplex(c1, c2);
    cout << "The sum of Imaginary part of c1 and c2 is : " << img << endl;
    return 0;
}