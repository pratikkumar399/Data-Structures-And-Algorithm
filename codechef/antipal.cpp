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
        int n;
        cin >> n;
        string s[n], t[n], str , list;
      
        int i;
        // t[i] = s[n + 1 - i];
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        for (i = 0; i < n / 2; i++)
        {
            str[i] += 1 ;
        }
        // list ="" ;
        for(int x : str){
            list += str[x] ;
        }

        cout << list<< endl;
    }

    return 0;
}