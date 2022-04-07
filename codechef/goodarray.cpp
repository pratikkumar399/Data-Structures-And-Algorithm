#include <bits/stdc++.h>
using namespace std;
void piyush(){
    int n;
        cin >> n;
        int ans[n];
        int a = 0;
        int b = 0;
        int uttar = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] % 2 == 0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (b % 2 != 0)
        {
            cout << a << endl;
        }
        else if (b % 2 == 0)
        {
         uttar = min(a, b/2);

            cout << uttar  << endl;
        }
}

int main()
{
    int t;
    
    cin >> t;
    while (t--)
    {
        piyush() ;
        
    }

    return 0;
}