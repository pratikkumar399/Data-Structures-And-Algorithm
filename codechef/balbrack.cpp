//bracket question
#include <bits/stdc++.h>
using namespace std;
int balbrack(string s)
{
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count1++;
        }
        else if (s[i] == ')')
        {
            count2++;
        }
    }

    long long int sum;

    sum = count1 < count2 ? count1 : count2;

    return 2 * sum;
}

int main()
{
    int t;

    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        cout << balbrack(s) << endl;
    }
    return 0;
}
