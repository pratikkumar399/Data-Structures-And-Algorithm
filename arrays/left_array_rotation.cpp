#include <bits/stdc++.h>
using namespace std;

int left_array_rotation(int size, int d)
{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        int temp = (i + (size - 1)) % size;
        arr[temp];
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int d;
    cin >> d;
    left_array_rotation(size, d);

    return 0;
}