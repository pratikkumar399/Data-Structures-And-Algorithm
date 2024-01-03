// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{

    int n;
    cin >> n;

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // prefix sum array
    vector<int> prefix(n);
    prefix[0] = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        prefix[i] = prefix[i - 1] + vec[i];
    }

    return 0;
}

// prefix = 1 3 6 10 15 21 28 36 45 55
// use cases
// 1. find sum of elements in range l to r
// cout<< prefix[r] - prefix[l-1]
