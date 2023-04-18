#include <iostream>

using namespace std;

class Shop
{
    int id;
    float price;

public:
    void set_data(int a, float b)
    {
        id = a;
        price = b;
    }
    void get_data(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;

    // general store items
    // veggies items
    // hardware items
    Shop *ptr = new Shop[size];
    int id;
    float price;
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> id >> price;
        // (*ptr).set_data(id,price);
        ptrTemp->set_data(id, price);
        ptrTemp++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        ptr->get_data();
        cout << endl;
        ptr++;
    }
    return 0;
}