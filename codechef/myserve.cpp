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
        int a, b;
        cin >> a >> b;
        int sum = a + b;

        if (sum % 2 == 0)
            continue;
        else
        {
            sum = sum + 1;
        }
        if (sum % 2 == 0)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}