#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Connecting our file with hout stream.
    ofstream hout("57_sample_file_a.txt");

    // Creating a  name string and filling it with the string entered by the user.
    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    // Writing a string to the file.
    hout << name + " is my name";

    hout.close();

    ifstream hin("57_sample_file_a.txt");
    string content;
    // hin >> content;
    getline(hin, content);
    cout << "The content of the file is : " << content << endl;
    hin.close();
    return 0;
}