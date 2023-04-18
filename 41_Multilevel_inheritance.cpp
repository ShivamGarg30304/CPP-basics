#include <iostream>

using namespace std;

class student
{
private:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int number)
{
    roll_no = number;
}

void student ::get_roll_no(void)
{
    cout << "The roll number is " << roll_no << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void exam::get_marks()
{
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void calpercentage(void)
    {
        percentage = (maths + physics) / 2;
    }
    void display()
    {
        get_roll_no();
        get_marks();
        cout << "Your percentage is " << percentage << endl;
    }
};

int main()
{
    /*
        If we are inheriting B from A and C from B : [A - - >B - - > C]
        1. A is the base class for B and B is the base class of C .
        2. A - - >B - - > C . It is a inheritance part.
    */
    result shivam;
    shivam.set_roll_no(345);
    shivam.set_marks(90, 92);
    shivam.calpercentage();
    shivam.display();
    return 0;
}