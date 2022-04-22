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
        int x;
        cin>> x ;
        if(x % 3== 0){
            cout<<"NORMAL"<<endl;
        }
        else if(x% 3 == 1){
            cout<<"HUGE"<< endl;
        }
        else if(x% 3 == 2){
            cout<<"SMALL"<< endl;
        }
    }

    return 0;
}