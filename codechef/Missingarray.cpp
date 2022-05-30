// C++ efficient program to
// find elements which are not
// present in second array
#include <bits/stdc++.h>
using namespace std;

// Function for finding
// elements which are there
// in a[] but not in b[].
void findMissing(int a[], int b[],  int n, int m)
{
    // Store all elements of  second array in a hash table
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(b[i]);

    // Print all elements of first array that are not present in hash table
    for (int i = 0; i < n; i++)
        if (s.find(a[i]) == s.end())
            cout << a[i] << " ";
}

// Driver code
int main()
{
    int a[] = {1, 2, 6, 3, 4, 5};
    int b[] = {2, 4, 3, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[1]);
    findMissing(a, b, n, m);
    return 0;
}
