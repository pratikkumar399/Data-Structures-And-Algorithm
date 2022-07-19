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
        int q = n;
        int arr[n];
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans.push_back(arr[i]);
        }

        // cout << b << " " << str << endl;

        for (int i = 0; i < n; i++)
        {

            int b;
            cin >> b;
            string str;
            cin >> str;
            for (int j = 0; j < b; j++)
            {
                if (str[j] == 'D')
                {
                    if (arr[i] == 9)
                    {
                        arr[i] = 0;
                        // cout << arr[i] << " ";
                    }
                    else if (arr[i] != 9)
                    {
                        // cout << arr[i] << " ";
                        arr[i] = arr[i] + 1;
                    }
                }
                else if (str[j] == 'U')
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else if (arr[i] != 0)
                    {
                        // cout << arr[i] << "-> ";
                        arr[i] = arr[i] - 1;
                    }
                }
            }
            // ans.push_back(arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}