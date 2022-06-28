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
        int a, b;
        cin >> a >> b;
        vector<int> arraay(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arraay[i];
        }
        bool ans = 1;

        for (int i = 0; i < a - 1; i++)
        {
            if (arraay[i] > arraay[i + 1])
            {
                if (arraay[i] + arraay[i + 1] > b)
                {
                    ans = 0;
                    break;
                }
                else
                {
                    int temp = arraay[i];
                    arraay[i] = arraay[i + 1];
                    arraay[i + 1] = temp;
                }
            }
        }
        if (ans == 0)
            cout << "NO" << endl;
        else if (ans == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}