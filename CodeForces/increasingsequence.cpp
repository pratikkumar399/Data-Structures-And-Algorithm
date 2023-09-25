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
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        long long answer = 1;
        b[0] = answer;
        for (int i = 0; i < n; i++)
        {
            if (!i)
            {
                // in case both match increase by 1
                if (a[i] == answer)
                {
                    answer++;
                    b[i] = answer;
                }
                // else just ignore increasing the value
                continue;
            }
            answer++;
            b[i] = answer;
            if (a[i] == answer)
            {
                answer++;
                b[i] = answer;
            }
        }
        cout << b[n - 1] << endl;
    }

    return 0;
}