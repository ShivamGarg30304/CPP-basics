#include <iostream>

using namespace std;

template <class T1, class T2 = int, class T3 = float>
class shivam
{
public:
    T1 a;
    T2 b;
    T3 c;
    shivam(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << endl;
    }
};

int main()
{
    shivam<int> sh(6, 4, 6.6);
    sh.display();
    shivam<int, int, int> s(6, 4, 6.6);
    s.display();
    return 0;
}