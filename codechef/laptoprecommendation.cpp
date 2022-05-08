#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void notYou()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mapped;

    for (int i = 0; i < n; i++)
    {
        mapped[arr[i]]++;
    }

    vector<pair<int, int>> p;
    for (auto it : mapped)
    {
        p.push_back(make_pair(it.second, it.first));
    }

    sort(p.begin(), p.end());

    if (p[p.size() - 1].first != p[p.size() - 2].first)
    {
        cout << to_string(p[p.size() - 1].second) << endl;
    }
    else
        cout << "CONFUSED" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}