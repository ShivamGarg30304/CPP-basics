#include <iostream>
using namespace std;

int main()
{
    int amount1;
    cout << "Enter the value of the amount1 \n";
    cin >> amount1; // '>>' This is called the insertion operator.

    int amount2;
    cout << "Enter the value of the amount2 \n";
    cin >> amount2;

    int sum = amount1 + amount2;
    cout << "The value of the sum is : " << sum; // '<<' This is called extraction operator
}