#include <iostream>

using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 3, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData(void);
};

void simple::printData(void)
{
    cout << "The value of data1 ,data2 and data3 is : " << data1 << " , " << data2 << " , " << data3 << endl;
}

int main()
{
    simple s(1, 4);
    s.printData();
    return 0;
}