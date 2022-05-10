#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, size;
        cin >> n >> size;
        string str[n];
        int sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum2 = 0;
                for (int k = 0; k < size; k++)
                {
                    sum2 += abs(str[j][k] - str[i][k]);
                }
                sum = min(sum, sum2);
            }
        }

        cout << sum << endl;
    }

    return 0;
}