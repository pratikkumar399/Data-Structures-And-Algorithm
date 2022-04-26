#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = 1 << i;

    return (n & mask) > 0 ? 1 : 0;
}

// n =  1 1 1 1 1 0 1  --> mask  = ~(0 0 0 0 1 0 0 )= 1 1 1 1 0 1 1 & 1 1 1 1 1 0 1 ---> 1 1 1 1 0 0 1
void clearBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
    cout << n << endl;
}

void update(int &n, int i, int v_update)
{
    clearBit(n, i);
    int mask = (v_update << i);
    n = n | mask;
    cout << n << endl;
}

int main()
{
    int n = 5;
    int i = 2;
    int ans = getIthBit(n, i);
    cout << ans << endl;
    clearBit(n, i);
    update(n, i, 1);
    return 0;
}