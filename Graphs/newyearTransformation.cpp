//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int current = 1;
    bool flag = false;

    do
    {
        current = current + arr[current - 1];
        if (current == m)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }

    } while (current < n);

    if (flag == false)
        cout << "NO" << endl;

    return 0;
}