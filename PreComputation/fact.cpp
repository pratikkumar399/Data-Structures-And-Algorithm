// given t test cases and in each case a number N . Print its factorial for each test case % M where M = 10^9 + 7

// Constraints 1 <= T <= 10^5   and 1 <= N <= 10^5
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;

long long fact[N];

int main()
{
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 0; i < N; ++i)
    {
        fact[i] = fact[i - 1] * i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    return 0;
}