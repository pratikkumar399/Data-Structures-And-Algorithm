#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    if (a == 'R' || b == 'R')
    {
        cout << 'R' << endl;
        ;
    }
    else if (a != b && a == 'B' || b == 'B')
    {
        cout << 'B' << endl;
    }
    else if(a != 'R' && b!=  'R'  && a == b){
        cout<<a << endl;
    } 
    else{
        cout<<'G'<<endl;
    }

    return 0;
}