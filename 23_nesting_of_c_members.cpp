// OOps - - Classes and object

// C++ - - > initially called - - > C with classes by the stroustroup
// Class - - > extension of structures (in C)
// structure had limitations
//     - - > members are public
//     - - > No methods
// Classes = structures + More
// Classes - - > Can have methods and properties
// Classes - - > Can have few members as private and few as public
// Structure in c++ are typedefed
// you can declare objects along with the class declartion like this
/*
class employee
{
    Class defination
} shiv,shiva,shivam;
*/

// shivam.salary = 6 Makes no sense if the salary is private

// Nesting of member functions

#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    chk_bin();
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;

    b.read();
    //b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}