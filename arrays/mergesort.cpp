#include <iostream>
using namespace std;
void merging(float a[], int l, int r, int m)
{

    int i = l, j = m + 1, k = 0;
    int temp[r - l + 1];

    while (i <= m && j <= r)
    {
        if (a[i] > a[j])
            temp[k++] = a[i++];

        else
            temp[k++] = a[j++];
    }

    while (i <= m)
    {
        temp[k++] = a[i++];
    }

    while (j <= r)
    {
        temp[k++] = a[j++];
    }

    for (i = l; i <= r; i++)
    {

        a[i] = temp[i - l];
    }
}

void mergeSort(float arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merging(arr, l, r, m);
    }
}

int main()
{

    float a[] = {2.2, 9.4, 4.2, 19.1, 17.2};
    int l = 0, r = 4;

    mergeSort(a, l, r);
    for (int x : a)
        cout << x << " ";
}