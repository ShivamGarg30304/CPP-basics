#include <iostream>

using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(T m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector v1(4);
    // v1.arr[0] = 3;
    // v1.arr[1] = 1;
    // v1.arr[2] = 2;
    // v1.arr[3] = 4;
    // vector v2(4);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = -1;
    // v2.arr[3] = 9;

    vector<float> v1(4);
    v1.arr[0] = 7;
    v1.arr[1] = 0.1;
    v1.arr[2] = 5.2;
    v1.arr[3] = 3.4;
    vector<float> v2(4);
    v2.arr[0] = 3.1;
    v2.arr[1] = 9.0;
    v2.arr[2] = -6.1;
    v2.arr[3] = 9.9;
    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}