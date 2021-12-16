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
        int maximum = *max_element(arr, arr + n);
        for (int i = 0; i < n; i++)
        {   
            
            if (arr[i] % arr[] == 0)
            {
               maximum = 0 ;
               
            }
            
        }
        cout << maximum << endl;
    }

    return 0;
}