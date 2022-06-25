#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int notYou(int n, string str)
{

    int count = 0;
    int count1 = str.size() - 1;
    int result = 0;
    while (count1 >= count)
    {
        if (str[count] == '(' && str[count1] == ')')
        {
            // counting the openeing bracket
            count++;
            // checking the instances of closing bracket
            count1--;
        }
        else if (str[count] == '(' && str[count1] == '(')
        {
            count1--;
            result++;
        }
        else if (str[count] == ')' && str[count1] == '(')
        {
            count1--;
            result++;
        }
        else if (str[count] == ')' && str[count1] == ')')
        {
            result++;
            count++;
        }
    }
    return result;
}

int32_t main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = notYou(n, str);
        cout << ans << endl;
    }

    return 0;
}
