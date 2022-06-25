#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

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

        cout << 0;
        int counter = 1;
        while (counter != a - 1)
        {
            // adding 0 at begining and last will ensure that the given conditions are satisfied
            cout << 1;
            counter++;
        }
        // subsequences will be 010 , 0110 .....
        cout << 0 << endl;
    }

    return 0;
}