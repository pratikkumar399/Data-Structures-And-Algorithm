#include <bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            // backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string str;
        cin >> str;
        int count= 0;

        for(int i = 0; i < str.size(); i++){
            if(str[i] == '0' or str[i] == '5'){
                count++ ;
            }
        }
        if(count> 0){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }

    }

    return 0;
}