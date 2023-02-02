// ॐ नमः शिवाय
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
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int count = 0;

        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // 5 5 1 5 1 5
                //  5 ==
                if (array[i] == array[j])
                    count++;
            }

            cout << count << endl;
            if (count % 2 == 0)
                ans = true;
            else
            {
                ans = false;
                break;
            }
            count = 0;
        }

        if (ans == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}