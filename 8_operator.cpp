#include <iostream>

using namespace std;
int main()
{
    int a = 3, b = 5;
    cout << "Operator in C++:\n";

    // Arthemetic Operators
    cout << "Following are the Arthemetic Operators in C++:\n";
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assignment Operators -->used to assign value to the variable.
    int c = 6, d = 9;
    char e = 'o';

    // Comparision Operators --> Used to compare the two variables
    cout << "Following are the Comparision Operators in C++:\n";
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Following are the Logical Operators in C++:\n";
    cout << "The value of this Logical AND operator ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of this Logical OR operator ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl;
    cout << "The value of this Logical NOT operator (!(a == b)) is " << (!(a == b)) << endl;

    return 0;
}