#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        int sum1[k];
        int sum2[k];
        int ans1 = x;
        int ans2 = y;

        for (int i = 1; i < k; i++)
        {
            ans1 += a;
            ans2 += b;
        }

        if (ans1 > ans2)
        {
            cout<<"DIESEL" <<endl ;
        }
        else if(ans1 == ans2 )
            cout<<"SAME PRICE" <<endl ;
        else{

            cout<<"PETROL" <<endl ;
        }
    }

    return 0;
}