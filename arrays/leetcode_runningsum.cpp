#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)

    {
        /* code */
        array[i] += array[i + 1];
    }

    cout << array[n];

    return 0;
}