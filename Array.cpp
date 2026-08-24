#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//Address of elements of array

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

//Take input from user of size of array and the elements of array and print the elements of array

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*Calculate the maximum value and minimum value out all the elements in the array
*/arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3 }

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

//calculate the sum of all elements in the given

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}

//Search the given elements x in the array.If present then return the index else return -1

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index: " << i;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}

/*count the no.of occurrences of a particular element x.
*/arr[] = {3, 5, 8, 3, 2, 1, 4, 3, 6, 3, 3, 52, 1, 7, 2 }

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
