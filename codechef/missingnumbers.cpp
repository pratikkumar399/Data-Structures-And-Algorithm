#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    int count = 0;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int y = 2;
        for (int i = 0; i < 4; i++)
        {   int div ;
            if (arr[i] > 0)
            {
                div = arr[i] / y;
            }
            if ((arr[i] % div) == 0)
            {
                count = arr[i] / div;
            }
            count *= count;
        }
            cout << count << endl;
    }

    return 0;
}