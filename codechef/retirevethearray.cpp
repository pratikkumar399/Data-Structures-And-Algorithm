#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int sum = 0;
        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            sum += array[i];
        }

        // finding the average one element can be
        sum = sum / (n + 1); // 1 2  3  -->  1 + 2 +3 + 3 , 1+2+2 +3 , 1+1+2+3   -->  7 , 8 , 9  =24

        // 24 / (4) => 6

        //  7 - 6 = 1 , 8 - 6 = 2 , 9 - 6 = 3
        for (int i = 0; i < n; i++)
        {
            cout << array[i] - sum << " ";
        }
        cout << endl;
    }

    return 0;
}