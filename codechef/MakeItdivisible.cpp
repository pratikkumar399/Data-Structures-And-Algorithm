#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;

        for (int i = 0; i < n; i++)
        {

            int ans = 0;
            ans = arr[i] % 3;
            if (ans == 1)
            {

                count1++;
            }
            else if (ans == 2)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
        if (count3 % 3 == 0)
        {
            cout << "0" << endl;
        }
        else if (count1 == count2)
        {
            cout << count1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}