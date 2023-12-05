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
        int n;
        cin >> n;
        string str;
        cin >> str;

        //  the minimum length Vlad can achieve by applying any number of deletions?
        //  one pair of adjacent letters can be deleted in one operation provided they are distinct.

        // 1. Find the number of pairs of adjacent letters that are distinct
        // 2. The answer is the length of the string minus the number of pairs of adjacent letters that are distinct
        // lets find maxCOunt of a letter

        int count = 0;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        for (auto it : mp)
        {
            count = max(count, it.second);
        }

        int ans = max(0, count - (n - count));

        if (n % 2 == 1 and ans == 0)
        {
            ans = 1;
        }

        cout << ans << endl;
    }
    return 0;
}