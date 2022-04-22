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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        bool value = false;
        for (auto i : m)
        {
            if(i.second >= 3)
            {
                cout << i.first << endl;
                value = true ;
                break;
            }
        }
        if(value == false){
            cout<<"-1"<<endl ;
        } 
        
    }

    return 0;
}