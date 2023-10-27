#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

pair<int, int> searchMatrix(vector<vector<int>> &matrix, int target)
{
    int l = 0, r = matrix.size();
    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if (matrix[mid][0] > target)
        {
            r = mid;
        }
        else
            l = mid;
    }
    pair<int, int> ans;
    ans.first = l;
    ans.second = (upper_bound(matrix[l].begin(), matrix[l].end(), target) - matrix[l].begin());
    return ans;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> ar(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int tar;
    cin >> tar;

    pair<int, int> ans = searchMatrix(ar, tar);

    cout << ans.first << " " << ans.second << endl;
    return 0;
}