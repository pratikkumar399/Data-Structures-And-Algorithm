#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, query;
    cin >> n >> query;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    deque<int> q;
    while (query--)
    {
        int d;
        cin >> d;
        q.clear();

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            // checking if the last element in the arr is max or not
            while (!q.empty() && arr[q.back()] < arr[i])
                // if not then remove its index from the queue
                q.pop_back();
            // pushing each index in queue
            q.push_back(i);
            // maintaining the window size for each index
            while (!q.empty() && q.front() <= i - d)
            {
                q.pop_front();
            }
            // checking the minimum for each subarray
            if (i >= d - 1)
            {
                ans = min(ans, arr[q.front()]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
