#include <iostream>

using namespace std;

template <class S>
class shivam
{
public:
    S data;
    shivam(S a)
    {
        data = a;
    }
    void display();
};
template <class S>
void shivam<S>::display()
{
    cout << data;
}

void function(int a)
{
    cout << "I am first function() " << a << endl;
}
template <class S>
void function(S a)
{
    cout << "I am first templatic function() " << a << endl;
}

int main()
{
    // shivam<float> h(7.8);
    // cout << h.data << endl;
    // h.display();

    function(7); // - - ->Exact match takes the highest priority.
    return 0;
}