/*Calculate the maximum value and minimum value out all the elements in the array
arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3 }*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
    int n = 9;

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum value = " << max << endl;
    cout << "Minimum value = " << min << endl;

    return 0;
}
