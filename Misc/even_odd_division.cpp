#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin >> a;
    while (true)
    {
        cout << a << " ";
        if (a == 1)
            break;
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            a = a * 3 + 1;
        }
    }
    cout<< " \n";

    return 0;
}