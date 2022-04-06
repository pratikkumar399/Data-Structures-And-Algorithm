#include <bits/stdc++.h>
using namespace std;
int sumDigits(int no)
{
    if (no == 0)
    {
        return 0;
    }

    return (no % 10) + sumDigits(no / 10);
}

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
        int sum = sumDigits(n);

        if (sumDigits(n) % 2 == 0)
        {
            while (sumDigits(n) % 2 == 0)
            {
                n++;
            }
            cout << n << endl;
        }
        else
        {
            while (sumDigits(n) % 2 != 0)
            {
                n++;
            }
            cout << n << endl;
        }
    }

    return 0;
}