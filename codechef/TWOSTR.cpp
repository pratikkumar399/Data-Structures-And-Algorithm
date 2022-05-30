#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s1[20], s2[20];
        cin >> s1;

        cout << endl;
        cin >> s2;
        char ch = '?';
        int flag = 1;
        for(int i = 0 ; s1[i]; i++ ) {
            char ch1 = s1[i], ch2 = s2[i];
            if( (ch1 != ch2) && (ch1 != '?' && ch2 != '?') ) {
                flag = 0;
            }
        }
            if (flag == 1)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        
        
    }
    return 0;
}