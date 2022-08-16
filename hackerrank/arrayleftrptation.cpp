#include <bits/stdc++.h>
using namespace std;

int main()
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
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        deque<int> st;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            st.push_back(arr[i]);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (st.size() > d)
            {
                int top = st.back();
                // 1 2 3 4 5 => 4 5 1 2 3 d = 3
                cout << "->" << top << " ";
                st.pop_back();
                ans.push_back(top);
                // 5 4
            }
            else
            {
                int top = st.front();
                st.pop_front();
                ans.push_back(top);
            }

            if (ans.size() == arr.size() - d)
                reverse(ans.begin(), ans.end()); // 4 5

            //  1 2 3 4 5 => 5  1 2 3 4
            // 1 2 3 4 5 => 4 5 1 2 3
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
    }

    return 0;
}