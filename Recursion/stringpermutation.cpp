#include <bits/stdc++.h>
using namespace std;

bool f(int n, string s)
{
    if (n > s.size() / 2)
        return true;
    if (s[n] != s[s.size() - n - 1])
        return false;
    return f(n + 1, s);
}

int main()
{
    string s = "MADAM";
    cout << f(0, s) << endl;
    return 0;
}