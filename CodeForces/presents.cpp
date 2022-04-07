#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m.insert({arr[i], i});
    }

    for (auto &it : m)
    {
        cout << it.second + 1 << " ";
    }

    return 0;
}