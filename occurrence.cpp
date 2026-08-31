/*count the no.of occurrences of a particular element x.
arr[] = {3, 5, 8, 3, 2, 1, 4, 3, 6, 3, 3, 52, 1, 7, 2 }*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 8, 3, 2, 1, 4, 3, 6, 3, 3, 52, 1, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    int count = 0;

    cout << "Enter element: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    cout << "Number of occurrences = " << count;

    return 0;
}
