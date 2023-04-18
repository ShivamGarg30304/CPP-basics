#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initilize the objects of its class.
    // It is automatically invoked whenever an object is created
    complex(void); // constructor declarition
    void PrintNumber(void)
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};
complex ::complex(void) // - - >> This is a default constructor.
{
    a = 0;
    b = 0;
    // cout << "hello" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.PrintNumber();
    c2.PrintNumber();
    c3.PrintNumber();
    return 0;
}

/* Characteristic of constructors

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments .
5. We cannot refer to their address.
*/