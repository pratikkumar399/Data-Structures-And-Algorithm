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
        if (n >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (n >= 1600 && n <= 1899){
            cout<<"Division 2" << endl;
        }
        else if(n >= 1400 && n <=1599){
            cout<<"Division 3" << endl;
        }
        else if( n <= 1399){
            cout<<"Division 4" << endl;
        }
    }

    return 0;
}