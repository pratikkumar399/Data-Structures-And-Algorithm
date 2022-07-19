#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxi = 0;
        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            // finding the index of largest number
            if (arr[i] == n)
                maxi += i;
            // finding the index of smallest number
            if (arr[i] == 1)
                mini += i;
        }
        if (maxi > mini)
        {
            // if smallest number is present before the largest number for example 2 1 3 => (1) + (3-2) -1 = 1 + 1 -1 ==0
            cout << mini + (n - maxi) - 1 << endl;
        }
        // if smallest number is present after the largest number for example 3 2 1 => (2-1) + (3-0) -1 = 1 + 2 =3
        else
            cout << (mini - 1) + (n - maxi) - 1 << endl;
    }

    return 0;
}