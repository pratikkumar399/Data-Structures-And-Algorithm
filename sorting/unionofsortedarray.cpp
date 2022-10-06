//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

// Efficient approach using merge sort
void intersection(vector<int> arr, vector<int> arr1, int n)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < arr1.size())
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr1[j] == arr1[j - 1])
        {
            j++;
            continue;
        }
        if (arr[i] < arr1[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else if (arr[i] > arr1[j])
        {
            ans.push_back(arr1[j]);
            j++;
        }
        else if (arr[i] == arr1[j])
        {
            ans.push_back(arr1[j]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        if (i > 0 && arr[i] != arr[i - 1])
        {
            ans.push_back(arr[i]);
            i++;
        }
    }

    while (j < arr1.size())
    {
        if (j > 0 && arr1[j] != arr1[j - 1])
        {
            ans.push_back(arr1[i]);
            j++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " " << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    vector<int> arr(n), arr1(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    // naive implementation

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
            {
                // cout << arr[i] << " ";
                break;
            }
        }
    }

    intersection(arr, arr1, n);
    return 0;
}