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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int size1 = arr.size();
        set<int> s1;
        for (int i = 0; i < size1; i++)
        {
            s1.insert(arr[i]);
        }

        int size2 = s1.size();
        if ((n - size2) % 2 == 0)
        {
            cout << size2 << endl;
        }
        else
        {
            cout << size2 - 1 << endl;
        }
    }

    return 0;
}