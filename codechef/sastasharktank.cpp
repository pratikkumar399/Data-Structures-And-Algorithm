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
        int x, y;
        cin >> x >> y;
        int ans1 = 0, ans2 = 0;
        ans1 = x * 10;
        ans2 = y * 5;

        if (ans1 > ans2)
        {
            cout << "First" << endl;
        }
        else if (ans2 > ans1)
        {
            cout << "Second" << endl;
        }
        else if (ans1 == ans2)
        {
            cout << "Any" << endl;
        }
    }

    return 0;
}