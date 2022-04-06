#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);

    int ans = arr[2] - arr[0];
    cout << ans << endl;

    return 0;
}