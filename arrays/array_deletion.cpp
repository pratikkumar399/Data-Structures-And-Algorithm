#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << " Enter the size of the array: ";
    cin >> n;

    int arr[n], i, index;

    cout << "Enter number of elements : \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nElements before deletion\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "indexition to be deleted : ";
    cin >> index;

    // 3 element to be deleted
    // arr[2]

    --index;
    for (i = index; i <= 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    // 1 2 3 4 5
    // arr[3] = arr[4]
    //
    // 1 2 3 4

    cout << "Elements after deletion are : \n";
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
