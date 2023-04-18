#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects (FUNCTOR): Function wrapped in a class so that it is avaolable like an object.
    int arr[] = {1, 100, 4, 8, 10, 15};
    sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

