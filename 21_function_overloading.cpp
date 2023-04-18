#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

// Calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate the volume of a cube
int volume(int a)
{
    return a * a * a;
}

// Calculate the volume of a cuboid
int volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3 ,5 and 6 is " << sum(3, 5, 6) << endl;
    cout << "The volume cuboid of sides 3 ,5 and 6 is " << volume(3, 5, 6) << endl;
    cout << "The volume cube of side 3 is " << volume(3) << endl;
    cout << "The volume cylinder of radius 3.7 and height 5 is " << volume(3.7, 5) << endl;
    return 0;
}