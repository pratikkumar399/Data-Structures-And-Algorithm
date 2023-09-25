#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, w;
    cin >> l >> w;
    vector<int> ar(l * w);
    for (auto &x : ar)
        cin >> x;
    int h;
    cin >> h;
    pair<int, int> res = {-1, -1};
    int i;
    for (i = 1; i < l * w; i++)
    {
        if (ar[i] >= h && ar[i - 1] <= h)
            res = {i / w, i % w};
    }
    if (res.first == -1 && res.second == -1)
        res = {l - 1, w - 1};
    cout << res.first << ' ' << res.second;
    return 0;
}
