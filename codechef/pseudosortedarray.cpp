#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void notYou(){
    int n;
        cin >> n;
        long long hojaobhai[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> hojaobhai[i];
        }
        long long addKrlebhai = 0;
        for (long long i = 0; i < n; i++)
        {
            if (hojaobhai[i - 1] > hojaobhai[i] && i >= 1)
            {
                swap(hojaobhai[i - 1], hojaobhai[i]);
                if (hojaobhai[i - 2] > hojaobhai[i - 1] && i >= 2)
                {
                    addKrlebhai += 2;
                }
                else if (i == 1)
                {
                    addKrlebhai++;
                }
                else
                {
                    addKrlebhai++;
                }
            }
        }
        if (addKrlebhai < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        notYou() ;
    }

    return 0;
}