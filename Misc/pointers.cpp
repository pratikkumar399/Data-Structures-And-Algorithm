// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int fun(int a, int b)
{
    return a + b;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif

    int a = 10, b = 20;

    int (*fp)(int, int);

    fp = fun;

    int sum = (*fp)(a, b);
    cout << sum << endl;

    return 0;
}