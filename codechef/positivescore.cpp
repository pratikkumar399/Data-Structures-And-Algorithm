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
        long long arr[n];
        long long count_positive = 0;
        long long count_negative = 0;
        long long zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                count_positive++;
            }
            else if (arr[i] == 0)
            {
                zero++;
            }
            else
            {
                count_negative++;
            }
        }

        count_positive--;
        count_negative--;
        long long uttar = 0;
        if (count_positive > 0)
        {
            uttar = (count_positive * (count_positive + 1) / 2);
        }
        if (count_negative > 0)
        {
            uttar += count_negative * (count_negative + 1) / 2;
        }
        cout << uttar << endl;
    }

    return 0;
}