// A hashing based CPP program
// to find if there are
// four elements with given res.
#include <bits/stdc++.h>
using namespace std;

// The function finds four
// elements with given res X
void findFourElements(vector<int> &arr, int n, int X)
{
    // Store sums of all pairs
    // in a hash table
    unordered_map<int, pair<int, int>> map;
    // storing the map pair
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            map[arr[i] + arr[j]] = {i, j};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int res = arr[i] + arr[j];

            // If X - res is present in hash table,
            if (map.find(X - res) != map.end())
            {

                pair<int, int> pr = map[X - res];
                if (pr.first != i && pr.first != j && pr.second != i && pr.second != j)
                {
                    cout << arr[i] << ", " << arr[j] << ", "
                         << arr[pr.first] << ", "
                         << arr[pr.second];
                    return;
                }
            }
        }
    }
}

// Driver code
int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findFourElements(arr, n, x);
    return 0;
}
