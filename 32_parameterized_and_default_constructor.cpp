#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void PrintNumber(void)
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) // This is a parameterized constructor as it takes two parameters
{
    a = x;
    b = y;
}
int main()
{
    // Inplicit call.
    complex a(4, 6);
    a.PrintNumber();

    // Explicit call.
    complex b = complex(4, 6);
    b.PrintNumber();
    return 0;
}
