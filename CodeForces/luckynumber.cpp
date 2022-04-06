#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int digits[] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

    for (int i = 0; i < 12; i++)
    {
        if (n % digits[i] == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}