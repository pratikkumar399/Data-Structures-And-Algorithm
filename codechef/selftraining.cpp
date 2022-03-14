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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 10 && arr[i] <= 60)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}