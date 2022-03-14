#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < x)
            {
                count = i+1 ;
            }
        }
        cout<< count  << endl  ;
    }

    return 0;
}