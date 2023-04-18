#include <iostream>
#include <fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

/*
In order to work with files in C++ ,you will have to open it . Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/
using namespace std;

int main()
{
    string st1 = "Hello I am Shivam Garg";
    // Opening files using construtor and writing.
    // ofstream out("57_sample_file_a.txt"); //---> Write operation
    // out << st;

    // Opening files using construtor and reading.
    string st2;
    ifstream in("57_sample_file_b.txt"); //---> reading operation
    // in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;
}