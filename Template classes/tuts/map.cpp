// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    // map , unordered_map
    // map -> ordered pair of key and value , means keys are sorted
    // operation time complexity for insertion -> O(logn)
    map<int, int> m;

    map<int, string> mp;

    vector<int> arr = {1, 2, 3, 4, 4, 5, 5, 5};
    vector<string> str = {"abc", "def", "ghi", "jkl"};

    // find the frequency of each element in the array
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]] += 1;
    }

    //
    for (auto it : m)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int maxi = 0;
    for (auto it : m)
    {
        maxi = max(maxi, it.second);
    }

    for (auto it : m)
    {
        if (it.second == maxi)
        {
            cout << it.first << endl;
        }
    }

    for (auto it : m)
    {
        if (m.find(4) != m.end())
        {
            cout << "found" << endl;
        }

        // trick
        if (m.count(4))
        {
            cout << "found" << endl;
        }

        if (m.find(4) == m.end())
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}