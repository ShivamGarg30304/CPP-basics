#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // int a = 5;
    // cout << "The value of a is : " << a << endl;
    // a = 2;
    // cout << "The value of a is : " << a << endl;

    // const int b = 5;
    // cout << "The value of a was : " << b << endl;
    // b = 3; // - - - -> You will get a error because b in constant
    // cout << "The value of a was : " << a << endl;

    // Manipulators in C++
    // int x = 5, y = 56, z = 8540;
    // cout << "The value of x without setw is : " << x << endl;
    // cout << "The value of y without setw is : " << y << endl;
    // cout << "The value of z without setw is : " << z << endl;

    // cout << "The value of x is : " << setw(4) << x << endl;
    // cout << "The value of y is : " << setw(4) << y << endl;
    // cout << "The value of z is : " << setw(4) << z << endl;

    // Operator precedence
    int a = 3, b = 7;
    int c = ((a * 5) + b);
    cout << "The value of c is : " << c << endl;
    c = ((((a * 5) + b) + 98) - 87);
    cout << "The value of c is : " << c << endl;
    return 0;
}