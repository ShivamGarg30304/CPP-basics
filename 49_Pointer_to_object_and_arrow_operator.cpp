#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // c1.setData(7, 8);
    // c1.getData();
    // Complex *ptr = new Complex;
    // // (*ptr).setData(7, 8); is exactly same as
    // ptr->setData(7, 8);
    // (*ptr).getData();

    // Array of objects
    Complex *ptr = new Complex[3];
    ptr->setData(7, 8);
    (*ptr).getData();
    return 0;
}