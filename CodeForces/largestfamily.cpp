#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array.begin(), array.end());

        int result = 0;
        // now we need to figure out the number of people who might be telling the truth
        //  2 3 1 2 3 => In this case if 2nd is telling the truth , then 3 +1 =>  4 , and then only 1 person is left and he can be the parent of the 4th person , in any case there cannot be  more than
        //  2 people  telling the truth , also notice that 4 + 1 adds up to n , therefore we can say that all the parent and children cannot be more than n , and

        // sorting the given arrayay of parens
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            // adding each of the values to check if it is greater then n
            ans += array[i];
            if (ans >= n)
                // in case we have a number of sums greater than or equal to n simply break out of the loop
                break;
            // each time the loop runs completely we have a new member telling the truth
            result++;
        }
        cout << result << endl;
    }

    return 0;
}