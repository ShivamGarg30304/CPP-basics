#include <iostream>
using namespace std;
int main()
{
    int a;  // --->initialization
    a = 12; // --->decleration
    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of character " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    short int e;
    cout << "size of short int " << sizeof(e) << endl;

    long int f;
    cout << "size of long int " << sizeof(f) << endl;

    return 0;
}