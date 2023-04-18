#include <iostream>

using namespace std;

int main()
{
    // What is pointer ? --> It is a data type that holds the address of other datatypes
    int a = 5;
    int *b = &a;
    // & - - -> Adress of Operator.
    cout << "The address of the a is : " << &a << endl;
    cout << "The address of the a is : " << b << endl;

    // * - - -> Deference variable.
    cout << "The value at address b is : " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The address of the b is : " << &b << endl;
    cout << "The address of the b is : " << c << endl;
    cout << "The value at address b is : " << **c << endl;

    return 0;
}