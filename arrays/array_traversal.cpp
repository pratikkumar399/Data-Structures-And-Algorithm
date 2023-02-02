#include <bits/stdc++.h>
using namespace std;

int Insertion(int array[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
    return 1;
}
void a_delete(int arr[], int size, int pos)
{

    pos--;
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[100] = {1, 2, 3, 4};
    int size = 4, index = 0;
    int element = 45;

    display(array, size);
    Insertion(array, size, element, 100, 0);
    size += 1;
    display(array, size);
    a_delete(array, size, 1);

    return 0;
}
