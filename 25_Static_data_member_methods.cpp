// Static variable is also known as the Class variable.
#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;
    // static int count=100; // - - - >> This is not valid.

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this employee number is " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id<<endl; // - - ->> This static function has acesss of static variable or other static function.
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count = 100; // Default value of the static variable is zero.

int main()
{
    Employee shiv, shivam, shiva;
    // shiv.id=444;
    // shiv.count=4; // - - - > Cannot do this as id and count are private.

    shiv.setData();
    shiv.getData();
    Employee::getCount();

    shivam.setData();
    shivam.getData();
    Employee::getCount();

    shiva.setData();
    shiva.getData();
    Employee::getCount();

    return 0;
}