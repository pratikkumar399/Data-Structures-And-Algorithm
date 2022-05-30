#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
    int input;
    cin >> input;
    bool ans = true;
    if (input % 2 == 0)
    {
        ans = false;
    }
    else
    {
        ans = true;
    }

    if (ans == false)
    {
        cout << "Mahmoud" << endl;
    }
    else
    {
        cout << "Ehab" << endl;
    }
    return 0;
}