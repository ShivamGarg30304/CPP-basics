/*
Create 2 classes:
1. SimpeCalculator  - - > Takes input of 2 numbers using a utlity function and
perform +,-,/,* and display the results using another function.

2. ScientificCalculator -> Takes input of 2 numbers using a utility function and performs
any four scientific operation of your choice and display the results using
another function.

3. Create another class HybirdCalculator and inherit it using these 2 classes
Q1. Which type of inheritance are you using ?
Q2. Which mode of inheritance are you using ?
Q3. Create an object of hybirdCalculator and disply results of simple and
scientific calculator.
Q4. How is code reusablity implemented?
*/

#include <iostream>
#include <cmath>

using namespace std;

class SimpeCalculator
{
protected:
    int a;
    int b;
    char c;
    void show(int result)
    {
        cout << "The value of " << a << " " << c << " " << b << " is : " << result << endl;
    }

public:
    void input(int x, int y, char z)
    {
        a = x;
        b = y;
        c = z;
    }

    void calculation()
    {
        int result;
        switch (c)
        {
        case '+':
            result = a + b;
            show(result);
            break;
        case '-':
            result = a - b;
            show(result);
            break;
        case '*':
            result = a * b;
            show(result);
            break;

        case '/':
            result = a / b;
            show(result);
            break;

        default:
            break;
        }
    }
};

int main()
{
    SimpeCalculator s1;
    int num1, num2;
    char choice;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "Enter the choice +,-,*,/ :" << endl;
    cin >> choice;
    s1.input(num1, num2, choice);
    s1.calculation();
    return 0;
}