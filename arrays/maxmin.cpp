#include <iostream>
using namespace std;
int main()
{
    int arr[50], size, i, maximum, minimum;

    cout << "size of array: " << endl;
    cin >> size;

    cout << "elements of array : " << endl;

    for (i = 0; i < size; i++){
        cin >> arr[i];
    }

    maximum = arr[0];

    for (i = 0; i < size; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }

    minimum = arr[0];

    for (i = 0; i < size; i++)
    {
        if (minimum > arr[i])
            minimum = arr[i];
    }

    cout << "Largest element : " << maximum;
    cout << "Smallest element : " << minimum;
    return 0;
}