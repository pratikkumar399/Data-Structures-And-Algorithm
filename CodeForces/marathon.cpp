#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int arr[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int counter = 0;
        int a = arr[0];
        for (int i = 1; i < 4; i++)
        {
            if (arr[i] > a)
            {
                counter++;
            }
        }
        cout << counter << endl;
        }

    return 0;
}