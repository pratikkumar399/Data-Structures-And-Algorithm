//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    int arr[a];
    // sort();
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    // 5 + 8 , 7 + 8 , 8 , 8 , 9 , 9 , 10 , 10
    // 5 , 7,  8, 8, 8, 8, 9, 9,10 , 10
    int i = 0, j = a - 1;
    int ans = 0;
    while (i < j)
    {
        while (i < j && arr[i] + arr[j] > b)
        {

            j--;
        }
        if (i >= j)
            break;
        ans++;
        i++;
        j--;
    }

    cout << a - ans << endl;

    return 0;
}