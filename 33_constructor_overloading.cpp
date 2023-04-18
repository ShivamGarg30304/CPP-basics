#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(void)
    {
        a = 0;
        b = 0;
    }
    void PrintNumber(void)
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 6);
    c1.PrintNumber();

    complex c2(4);
    c2.PrintNumber();

    complex c3;
    c3.PrintNumber();
    return 0;
}