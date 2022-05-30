#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h[t], w[t];
        int i ;
        for ( i = 0; i < t; i++)
        {
            /* code */
            cin >> h[i];
            cin >> w[i];
        }
      
            if (h[i] > w[i])
            {
                cout << "YES" << endl;
            
            }
            else
            {
                cout << "NO" << endl;
            }
        
    }

    return 0;
}