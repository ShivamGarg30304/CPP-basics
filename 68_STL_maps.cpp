#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // MAP IS AN ASSOCIATIVE ARRAY.
    map<string, int> marksMap;
    marksMap["Shivam"] = 98;
    marksMap["Shiv"] = 48;
    marksMap["Shiva"] = 9;

    marksMap.insert({{"Abhay", 57}, {"Abhishek", 99}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    cout << "The size is : " << marksMap.size() << endl;
    cout << "The maximum size is : " << marksMap.max_size() << endl;
    cout << "The empty's return value is : " << marksMap.empty() << endl;
    return 0;
}