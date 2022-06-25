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
        int number;
        string str;
        string str2 = "";
        cin >> number;
        cin >> str;

        for (int i = 0; i <= number - 2; i += 2)
        {

            if (str[i] == '0' and str[i + 1] == '1')
            {
                str2.append("T");
            }
            if (str[i] == '0' and str[i + 1] == '0')
            {
                str2.append("A");
            }

            if (str[i] == '1' and str[i + 1] == '0')
            {
                str2.append("C");
            }
            if (str[i] == '1' and str[i + 1] == '1')
            {
                str2.append("G");
            }
        }
        cout << str2 << endl;
    }

    return 0;
}