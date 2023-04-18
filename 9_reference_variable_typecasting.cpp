#include <iostream>

using namespace std;

int c = 87;

int main()
{
    // ********* BUILD IN DATA TYPES **********
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The value of sum is : " << c << endl;
    // cout << "The value of global c is : " << ::c;

    // ********* FLOAT , DOUBLE , AND LONG DOUBLE LITERALS **********
    // float d = 34.4f;
    // long double e = 48.4;

    // cout << "The value of d is : " << d << endl;
    // cout << "The value of e is : " << e;

    // cout << "The size of 45.6 is : " << sizeof(45.6) << endl;
    // cout << "The size of 45.6f is : " << sizeof(45.6f) << endl;
    // cout << "The size of 45.6F is : " << sizeof(45.6F) << endl;
    // cout << "The size of 45.6l is : " << sizeof(45.6l) << endl;
    // cout << "The size of 45.6L is : " << sizeof(45.6L) << endl;

    // ********* REFERENCE VARIABLES **********
    // Shivam - - -> Shiv - - - -> Shivam Garg
    // float x = 56;
    // float &y = x;
    // cout << x << endl;
    // cout << y << endl;

    // ********* TYPECASTING **********
    int a = 45;
    float b = 45.45;
    cout << "The value of a is : " << float(a) << endl;
    cout << "The value of a is : " << (float)a << endl;

    cout << "The value of b is : " << int(b) << endl;
    cout << "The value of b is : " << (int)b << endl;

    int c = int(b);

    cout << "The value of this a + b expression is = " << a + b << endl;
    cout << "The value of this a + (int)b expression is = " << a + (int)b << endl;
    cout << "The value of this a + int(b) expression is = " << a + int(b) << endl;
    return 0;
}