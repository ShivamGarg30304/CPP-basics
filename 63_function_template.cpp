#include <iostream>

using namespace std;

// float Average(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template <class T1, class T2>

float Average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = Average(4.798, 5.9);
    cout << "The average of these number is " << a << endl;
    int x = 9, y = 90;
    swapp(x, y);
    printf("x=%d\ny=%d", x, y);
    return 0;
}