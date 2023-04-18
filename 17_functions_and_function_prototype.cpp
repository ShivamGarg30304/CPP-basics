#include <iostream>

using namespace std;

// Function Prototype
// type function-name (arguments);
int sum(int a, int b);
// int sum(int a, b);  - - - - > Not Acceptable
// int sum(int , int);  - - - - > Acceptable

void greet(void); //  - - - - > Acceptable
void greet();     //  - - - - > Acceptable
int main()
{
    int num1, num2;
    cout << "Enter first number : " << endl;
    cin >> num1;
    cout << "Enter second number : " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    int add = sum(num1, num2);
    cout << "The sum is : " << add << endl;
    greet();
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void greet()
{
    cout << "Hello , Good Morning" << endl;
}