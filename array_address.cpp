#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        cout << &arr[i] << " ";
    }

    return 0;
}