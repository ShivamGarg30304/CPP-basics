#include <iostream>

using namespace std;

// int fact(int x)
// {
//     if (x == 0 || x == 1)
//     {
//         return 1;
//     }
//     else
//         return x * fact(x - 1);
// }

inline int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int number;
    cout << "Enter the number : " << endl;
    cin >> number;
    // cout << "The value of " << number << "! is : " << fact(number) << endl;
    cout << "The value at " << number << " term of fibonacci series is : " << fib(number) << endl;
    return 0;
}
