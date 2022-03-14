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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 8;
        sort(arr, arr + n);

        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 6 && arr[j] != 13 && arr[j] != 21 && arr[j] != 28 && arr[j] != 7 && arr[j] != 14 && arr[j] != 20 && arr[j] != 27)
            {
                count++;
            }
        }
        cout << count  << endl;
    }

    return 0;
}