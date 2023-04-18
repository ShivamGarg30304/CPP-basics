#include <iostream>

using namespace std;

/*
    Syntax for intialization list in constructor:
    constructor (argument -list):initial -section
    {
        assignment + other code;
    }
    class Test
{
    int a;
    int b;
    public:
    Test(int i,int j):a(i),b(j){
        constructor body;
    }
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    Test(int i, int j) : b(j), a(i + b) //--->RED
    // FLAG this will create problems because a will be intialized first .
    {
        cout << "Construtor executed " << endl;
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    Test shiv(5, 8);
    return 0;
}