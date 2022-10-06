//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

// int a = 10;
const int MAX = 3;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int arr[5] = {2, 4, 6, 8, 10}, i;

    // cout << arr << " " << endl;

       for (i = 0; i < 5; i++)
    {
        // printing the elements address and value at
        // arr[i] using *(arr + i) syntax
        cout << i << " " << (arr + i) << " " << arr << " " << *(arr + i) << " " << arr[i] << endl;
        // printf("[index %d] Address : %u, Value : %d\n", i, (arr + i), *(arr + i));

    }
    return 0;
}