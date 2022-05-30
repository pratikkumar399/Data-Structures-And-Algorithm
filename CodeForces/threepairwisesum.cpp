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
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);

        if (arr[2] != arr[1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        }
    }

    return 0;
}