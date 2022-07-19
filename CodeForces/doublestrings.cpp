#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

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
        string ans = "", st;
        unordered_map<string, int> mapping;
        int N;
        cin >> N;
        vector<string> container(N);

        for (int i = 0; i < N; i++)
        {
            cin >> container[i];
        }
        for (int i = 0; i < N; i++)
        {
            // storing unique substrings in a map
            mapping[container[i]]++;
        }

        for (int i = 0; i < N; i++)
        {
            st = container[i];
            int res = 0;
            for (int j = 0; j < st.size() - 1; j++)
            {
                string a = st.substr(0, j + 1);

                // making substrings
                string b = st.substr(j + 1);
                // in case if the substring is present in the other string arrays
                if (mapping.find(a) != mapping.end() && mapping.find(b) != mapping.end())
                {
                    ans = ans + "1";
                    res = 1;
                    break;
                }
            }

            if (res == 0)
            {
                ans = ans + "0";
            }
        }

        cout << ans << endl;
    }
    return 0;
}
