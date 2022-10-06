//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int answer(int n)
{
    int ans = 0;
    if (n == 0)
    {
        ans++;
    }

    for (int i = 0; i < n; i++)
    {
        if (n - i >= 0)
        {
            answer(n - i);
        }
    }

    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    answer(n);
    return 0;
}