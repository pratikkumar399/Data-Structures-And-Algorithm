// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 3 == 1 or n % 3 == 2)
        {
            cout << "First" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
    }

    return 0;
}