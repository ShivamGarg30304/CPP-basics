#include <iostream>

using namespace std;
int z = 6;
void sum()
{
    cout << z << endl;
}
int main()
{
    int z = 5;
    cout << z << endl;
    cout << ::z << endl;
    z = 78;
    cout << z << endl;
    sum();
    bool tr = true;
    cout << z << endl;
    cout << tr;
    return 0;
}