#include <bits/stdc++.h>
using namespace std;

void notYou()
{
    string str;
    cin >> str;
    int size = str.size();
    if (size == 1)
    {
        cout << "1" << endl;
        return;
    }

    int start = size-1;
    int end = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '0')
        {
            start = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            end = i;
            break;
        }
    }

    cout << abs(end - start) + 1 << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}