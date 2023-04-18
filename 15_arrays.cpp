#include <iostream>

using namespace std;

int main()
{
    int marks[] = {90, 92, 94, 84};

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    int *ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        cout << *(ptr++) << endl;
        // ptr++;
    }
    return 0;
}