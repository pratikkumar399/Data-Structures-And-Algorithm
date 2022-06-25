
// Another code

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans1 = 0, ans2 = 0, ans3 = 0;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        ans1 += x;
        ans2 += y;
        ans3 += z;
    }
    if (ans1 == 0 && ans2 == 0 && ans3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}