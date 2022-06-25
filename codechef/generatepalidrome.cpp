#include <iostream>
using namespace std;

#define endl "\n"


int main()
{
    int t;
    string str = "", str2 = "";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        char ch = 97;
        if (x == 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                str += ch;
                if (i + 1 < n)
                    str += ch;
            }
            cout << str << endl;
        }
        else if (n % 2 == 0 && x > (n / 2))
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 1 && x > (n / 2) + 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            int counter = 0;
            for (int i = 0; i < n; i += 2)
            {
                str += (ch + (counter % x));
                if (i + 1 < n)
                {
                    str2 += (ch + (counter % x));
                }
                counter++;
            }
            reverse(str2.begin(), str2.end());
            cout << str << str2 << endl;
        }
    }
    return 0;
}