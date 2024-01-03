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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count1 = 0;

        int dotCount = count(str.begin(), str.end(), '.');

        for (auto it : str)
        {
            if (count1 >= 3)
                break;
            if (it == '.')
            {
                count1++;
            }
            else
            {
                count1 = 0;
            }
        }
        if (count1 >= 3)
            cout << 2 << endl;
        else
        {
            cout << dotCount << endl;
        }
    }
    return 0;
}