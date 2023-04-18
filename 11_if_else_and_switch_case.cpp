#include <iostream>

using namespace std;

int main()
{
    // 1. Selection control structure:if else-if else ladder
    // int age;
    // cout << "Enter the age : " << endl;
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "You are less than 18" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are 18" << endl;
    // }
    // else
    // {
    //     cout << "You are more than 18" << endl;
    // }

    // 2. Selection control structure:Switch case
    int age;
    cout << "Enter the age : " << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    default:
        cout << "You are not 18" << endl;
        break;
    }
    cout << "Out of switch case" << endl;
    return 0;
}