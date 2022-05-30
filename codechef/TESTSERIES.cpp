#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r[5];

        for (int i = 0; i < 5; i++)
        {
            /* code */
            cin >> r[i];
        }

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < 5; i++)
        {

            if (r[i] == 0)
            {
                count0++;
            }
            else if (r[i] == 1)
            {
                count1++;
            }
            else if (r[i] == 2)
            {
                count2++;
            }
        }

        if (count1 == count2)
        {
            cout << "DRAW" << endl;
        }
        else if (count1 > count2)
        {
            cout << "INDIA" << endl;
        }
        else
        {
            cout << "ENGLAND" << endl;
        }
    }

    return 0;
}