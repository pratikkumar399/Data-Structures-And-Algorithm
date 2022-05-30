#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n, m, i;
 cin >> n >> m;
 array<ll, 2> alice[n], bob[m];
 for (i = 0; i < n; i++)
 {
 cin >> alice[i][0] >> alice[i][1];
 }
 for (i = 0; i < m; i++)
 {
 cin >> bob[i][0] >> bob[i][1];
 }
 sort(alice, alice + n);
 sort(bob, bob + m);
 ll alice_pointer = 0, bob_pointer = 0;
 ll freetime = 0;
 while ((alice_pointer < n) && (bob_pointer < m))
 {
 int tempa, tempb;
 tempa = max(alice[alice_pointer][0], bob[bob_pointer][0]);
 tempb = min(bob[bob_pointer][1], alice[alice_pointer][1]);
 if (tempb > tempa)
 {
 freetime = freetime + tempb - tempa;
 }
 if (alice[alice_pointer][1] > bob[bob_pointer][1])
 bob_pointer += 1;
 else
 alice_pointer += 1;
 }
 cout << freetime;
 return 0;
}