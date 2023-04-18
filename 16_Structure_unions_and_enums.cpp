#include <iostream>

using namespace std;

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
} emp;

union money
{
    int rice;
    char car;
    float pound;
};

int main()
{
    // emp shiv;
    // shiv.eid = 456;
    // shiv.favChar = 's';
    // shiv.salary = 5654.45;

    // cout << "The id is : " << shiv.eid << endl;
    // cout << "The favChar is : " << shiv.favChar << endl;
    // cout << "The salary is : " << shiv.salary << endl;

    // union money m1;
    // m1.rice = 98;
    // cout << m1.rice << endl;
    // m1.car='S';
    // - - - > Now the value in the m1.rice is overwrite and now it return garbage in return:

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal M1 = lunch;
    cout << M1 << endl;
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    return 0;
}