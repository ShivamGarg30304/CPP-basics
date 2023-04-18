#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap the value.
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// Call by reference.
// void swappointer(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int &
void swapRefVar(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int a = 5, b = 7;
    // cout << "The sum of 5 and 7 is : " << sum(a, b) << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    // swap(&a, &b);  // This will not swap a and b
    // swappointer(&a, &b);  // This will swap a and b using pointers reference
    swapRefVar(a, b); // This will swap a and b using reference variable
    // swapRefVar(a, b) = 700;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}