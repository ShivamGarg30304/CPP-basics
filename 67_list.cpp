#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 lenght
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(78);
    list1.push_back(98);
    list1.push_back(98);
    list1.push_back(59);
    display(list1);
    // REMOIVING ELEMENTS FROM THE LIST.
    // list1.remove(78);
    // list1.pop_front();
    // list1.pop_back();

    // SORTING THE LIST.
    // list1.sort();
    // display(list1);

    // REVERSING THE LIST
    list1.reverse();
    display(list1);

    list<int> list2(3); // Empty list of size 3.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 8;
    iter++;
    *iter = 6;
    iter++;
    *iter = 2;
    iter++;
    display(list2);

    // list1.merge(list2);
    // list1.sort();
    // cout << "After the merging" << endl;
    display(list1);
    return 0;
}