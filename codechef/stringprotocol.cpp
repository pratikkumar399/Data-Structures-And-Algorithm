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
        string arr;
        int i = 0;

       cin>>arr;

        int count = 0;

        while (i < n)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
                i++;
            }
            else if (arr[i] == arr[i + 1])
            {
                count++;
                i = i + 2;
            }
        }

        cout << count << endl;
    }

    return 0;
}