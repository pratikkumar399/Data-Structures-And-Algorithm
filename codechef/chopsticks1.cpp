#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, diff;
    cin >> n;
    cin >> diff;
    int L[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
    }
    sort(L, L + n);

    for (int i = 0; i < n - 1;)
    {

        if (L[i] >= L[i + 1] - diff)
        {

            count++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;

    return 0;
}