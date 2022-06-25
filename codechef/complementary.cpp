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
        int a;
        cin >> a;
        string str;
        cin >> str;

        for (int i = 0; i < a; i++)
        {
            if (str[i] == 'T')
                str[i] = 'A';
            else if (str[i] == 'A')
                str[i] = 'T';
            else if (str[i] == 'C')
                str[i] = 'G';
            else if (str[i] == 'G')
                str[i] = 'C';
        }
        cout << str << endl;
    }

    return 0;
}