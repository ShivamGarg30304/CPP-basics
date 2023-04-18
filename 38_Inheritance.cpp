#include <iostream>

using namespace std;
// Base class.
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 45;
    }
    employee() {}
};

// Derived class syntax

/*class {{derived - class-name}} : {{visiblity-mode}} {{base-class-namespace name}}
{
    class members/methods/etc.
}

NOTES::
1. DEFAULT VISIBLITY MODE IS PRIVATE.
2. PUBLIC VISIBLITIY MODE :  public members of the base class becomes public members of the derived class.
2. PRIVATE VISIBLITIY MODE :  public members of the base class becomes private members of the derived class.
3. Private members are never inherted
*/

// Creating a programmer class derived from employee base class.
class programmer : employee
{
public:
    int languageCode = 5;
    programmer(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    void getdata()
    {
        cout << "The id is " << id << endl;
        cout << "The salary is " << salary << endl;
    }
};

int main()
{
    employee shiv(3), shivam(5);
    cout << "The salary is " << shiv.salary << endl;
    cout << "The salary is " << shivam.salary << endl;
    programmer skillF(2);
    skillF.getdata();
    return 0;
}