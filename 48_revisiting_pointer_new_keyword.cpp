#include <iostream>

using namespace std;

int main()
{
    // Basic example
    // int a = 4;
    // int *ptr = &a;
    // cout << "The value of a is " << *(ptr) << endl;

    // NEW KEYWORD
    // int *p = new int (45);
    // float *p = new float(45.65);
    // cout << "The value at the address of p is " << *(p) << endl;

    // DYNAMIC MEMORY ALLOCATION
    int *arr = new int[5];
    arr[0] = 9;
    *(arr + 1) = 10;
    arr[2] = 93;
    arr[3] = 75;
    arr[4] = 78;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    cout << "The value of arr[4] is " << arr[4] << endl;

    // DELETE OPERATOR
    return 0;
}