#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Elements are: " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No pair found" << endl;

    return 0;
}