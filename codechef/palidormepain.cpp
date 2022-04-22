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
        int a, b;
        cin >> a >> b;
        if(a % 2 == 0 && b % 2 == 0){
            cout<<'a'*(a/2) + 'b'*b + 'a'*(a/2) <<endl ;
            cout<<'b'*(b/2) + 'a'*a + 'b'*(b/2) <<endl ;
        }
        else if(a % 2 == 0){
            cout<<'a'*(a/2) + 'b'*b + 'a'*(a/2) <<endl ;

        }
    }

    return 0;
}