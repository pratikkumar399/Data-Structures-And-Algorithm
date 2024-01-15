// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // coordinates of square as input
        int n;
        cin >> n;
        string str, stt;
        cin >> str >> stt;
        // now we need to find how many pairs are there of 01 and 10
        int i = 0, j = 0;
        int count1 = 0, count2 = 0;
        while (i < str.size())
        {
            if (str[i] == '1' && stt[j] == '0')
            {
                count1++;
            }
            else if (str[i] == '0' && stt[j] == '1')
            {
                count2++;
            }
            i++;
            j++;
        }
        cout << max(count1, count2) << endl;
    }

    return 0;
}
