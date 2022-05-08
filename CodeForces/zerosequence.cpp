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
        int count_zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count_zero++;
            }
        }
        int count = 0;
        for (int i = 0; i < n -1; i++)
        {
             if (arr[i] == arr[i + 1] && arr[i] != 0)
            {
                count++;
                break ;
            }
        }
        if (count_zero > 0)
        {
            cout << n - count_zero << endl;
        }
        else if (count > 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << (n + 1) << "\n";
        }
    }
 
    return 0;
}