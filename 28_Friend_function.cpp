#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumcomplex fuction is allowed to do anything
    // with my private data.
    friend complex sumcomplex(complex o1, complex o2);
    void PrintNumber(void)
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    // cout << c1.a;  // invalid
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 5);
    c2.setNumber(2, 4);
    c1.PrintNumber();
    c2.PrintNumber();

    sum = sumcomplex(c1, c2);
    sum.PrintNumber();

    return 0;
}

/* Properties of friend functions

1. Not in the scope of class
2. Since it is not in the scope of the class , it cannot be called from the object of that class.
c1.sumcomplex() - - - > This is invalid.
3. Can be invoke without the help of any object
4. Usually contains the object as argument.
5. Can be declared inside public or private section of the class.
6. It cannot acess the members directly by their names and need object_name.member_name
to access any member.

*/
