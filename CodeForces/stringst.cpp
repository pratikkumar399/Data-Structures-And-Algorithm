#include <iostream>
#include<cmath>
using namespace std;

void byte_dock()
{
    string s, t;
    cin >> s >> t;
   
    if (t.size() == 1 && t[0] == 'a')
    {
        cout << 1 << endl;
        return;
    }
    for (long long i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
        {
            cout << -1 << endl;
            return;
        }
    }
    long long ans = pow(2,  s.size());
    cout << ans << endl;
}

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        byte_dock();
    }

    return 0;
}