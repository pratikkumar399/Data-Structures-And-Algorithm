#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int j;
        cin >> j;
        string s;
        long long int number = 0;
        cin >> s;
        j--;
        while (j >= 0)
        {
            if (s[j] == '1')
            {
                number++;
            }
            j--;
        }
          long long int total = 0 ;
        
            total = (number * (number + 1)) / 2 ;
            

        cout << total << endl;
    }
    return 0;
}