#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; // t=1;
    cin >> t;

    while (t--)
    {
        int n, red, blue;
        cin >> n >> red >> blue;

        blue++;
        int k = red / blue, r = red % blue;

        string str = "";
        for (int i = 0; i < blue; i++)
        {
            if (r > 0)
            {
                int x = k + 1;
                while (x--)
                    str += "R";
                str += "B";
                r--;
            }
            else
            {
                int x = k;
                while (x--)
                    str += "R";
                str += "B";
            }
        }
        str.pop_back();
        cout << str << endl;
    }

    return 0;
}