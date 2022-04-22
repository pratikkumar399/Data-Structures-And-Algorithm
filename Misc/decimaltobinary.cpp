#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str  ;
    while (n)
    {
        str += char((n&1) + '0') ;
        n >>= 1 ;
    }
    reverse(str.begin() , str.end()) ;
    cout<<str;
    return 0;
}
