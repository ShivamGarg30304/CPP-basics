#include <iostream>

using namespace std;

// inline int product(int a, int b) // used when the code is small the compiler change the function call by the content of the function.
// {
//     // static int c = 0;  // This executes only once
//     // c = c + 1;   // When the next time function is run, the value of c will be retained.
//     // return a * b + c;
//     return a*b;
// }.

float moneyRecieved(int current_money, float factor = 1.05)
{
    return current_money * factor;
}

// int strlen(const char* p)
// {

// }

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b : " << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "If you have " << money << " money then you will recieve " << moneyRecieved(money) << " Rupees" << endl;
    money = 200000;
    cout << "If you have " << money << " money then you will recieve " << moneyRecieved(money, 1.1) << " Rupees" << endl;
    return 0;
}