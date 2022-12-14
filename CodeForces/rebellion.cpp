//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (arr[i] > arr[j])
            {
                i++;
                j--;
                count++;
            }
            else if (arr[j] == 0 && arr[i] == 0)
            {
                i++;
            }
            else if (arr[i] == 1 && arr[j] == 1)
            {
                j--;
            }
            else
            {
                j--;
            }
        }
        cout << count << endl;
    }

    return 0;
}