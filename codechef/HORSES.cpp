#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
 int ans  = 0;
    while (t--)
    {
        int n;
        cin >> n;
    int minm =  INT_MAX;
        int diff[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
             cin >> diff[i];
        }
        

        for (int i = 0; i < n-1; i++)
        {
           
            for (int j = i+1; j < n; j++)
            {
                /* code */
                 ans = abs(diff[i] -  diff[j]) ;
                 minm =  min(minm,ans) ;
            }
        }

        cout << minm<<endl;
    }
    return 0;
}