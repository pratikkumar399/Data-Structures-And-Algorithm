#include <bits/stdc++.h>
using namespace std;

int isVowel(char ch)
{
    // Make the list of vowels
    string s = "aeiouyAEIOUY";
    return (s.find(ch) != string::npos);
}

int main()
{
    string s;
    cin >> s;
    long long n = s.length();
    string ans;

    for (long long i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = s[i] + 32;
        }
        if (isVowel(s[i]))
        {
            continue;
        }
        else{

            ans += ".";
            ans += s[i];
        }
    }
    cout << ans << endl;

    return 0;
}