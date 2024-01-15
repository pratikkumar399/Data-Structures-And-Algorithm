// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        bool flag = false;
        long long prev = 0;
        for (int i = 0; i < n; i++)
        {
            long long chargeCount = (arr[i] - prev) * a;
            prev = arr[i];
            long long mini = min(chargeCount, b);
            f -= mini;
            if (f <= 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}
