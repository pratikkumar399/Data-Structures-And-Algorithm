#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int count = 0;

        if (a == p && b == q)
        {
            cout << '0' << endl;
        }
        else if((a + b) % 2 == (p+q) % 2){
            cout<<'2'<<endl ;
        }
        else{
            cout<<'1'<<endl;
        }
        
    }

    return 0;
}