#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 876;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of employee is " << id << endl;
    }
};
int main()
{
    // Employee shiv ,shivsam,shiva,shivani;
    // shiv.setId();
    // shiv.getId();

    Employee FB[5];
    for (int i = 0; i < 5; i++)
    {
        FB[i].setId();
        FB[i].getId();
    }

    return 0;
}