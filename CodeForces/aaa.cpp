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
        int n, m;
        cin >> n >> m;

        vector<int> vasya(n), petya(m);
        for (auto &it : vasya)
            cin >> it;
        for (auto &it : petya)
            cin >> it;

        sort(vasya.begin(), vasya.end(), greater<int>());
        sort(petya.begin(), petya.end());

        long long a = 0, b = n - 1;
        long long c = 0, d = m - 1;
        long long sum = 0;
        while (a <= b)
        {
            int temp1 = abs(vasya[a] - petya[c]);
            int temp2 = abs(vasya[b] - petya[d]);
            if (temp1 > temp2)
            {
                sum += temp1;
                a++;
                c++;
            }
            else if (temp1 < temp2)
            {
                sum += temp2;
                b--;
                d--;
            }
            else
            {
                sum += temp2;
                if (vasya[a] > petya[a])
                {

                    b--;
                    d--;
                }
                else
                {
                    a++;
                    c++;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}

// 6 4 1 2  , 1 2 3 3 5 7  ->   ->