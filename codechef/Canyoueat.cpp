#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int output = 0;

        if (N % K == 0)
        {
            output = N / K;
            cout << output << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}