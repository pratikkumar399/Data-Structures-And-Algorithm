#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 4;
    int n = 3;
    cout<<(x<<n)<<endl;
    cout << (x & (x - 1))<<endl ;
    cout << (x & ~(x - 1)) << endl;
    cout << (x & (x + (1 << n))) << endl;
    cout << (x & ~(x + (1 << n))) << endl;
    cout << (x | (x + 1)) << endl;
    cout << (x | ~(x + 1)) << endl;
    cout << (x | (x - (1 << n))) << endl;
    cout << (x | ~(x - (1 << n))) << endl;

    return 0;
}