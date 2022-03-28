#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int x = 0;

    for (int i = 0; i < n; i++)
    {string n;
        cin >> n;
        if (n == "++X")
        {
            ++x;
        }
        if (n == "X++")
        {
            x++;
        }
        if (n == "--X")
        {
            --x;
        }
        if (n == "X--")
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}