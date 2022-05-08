#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
void notYou()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long maxi = a * n;

    if (m < a + 1)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << maxi / (a + 1) << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}