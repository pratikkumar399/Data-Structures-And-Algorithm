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
        int n;
        cin >> n;
        int s[n];
        int d[n];
        int count = 0 ;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            
        }

        for (int i = 0; i < n; i++)
        {
            if(s[i] == d[i]){
                count += 1; ;
            }
        }
        cout<< count  << endl  ;
    }

    return 0;
}