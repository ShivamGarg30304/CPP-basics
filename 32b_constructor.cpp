#include <iostream>

using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
// Create a function which takes 2 points object and computes the distance between those points.

int main()
{
    point p(1, 2);
    p.display();
    point q(1, 3);
    q.display();
    return 0;
}
