#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");

    pair<int, string> p1 = p;  // this just copies by value not by refrence
    pair<int, string> &p2 = p; // this copies the value by reference so the changes done reflect in the code
    p1.first = 3;
    cout << p.first << ' ' << p.second << endl;

    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {4, 5};
    swap(p_arr[0], p_arr[2]);

    for (int i = 0; i < n; i++)
    {
        cout << p_arr[i].first << ' ' << p_arr[i].second;
    }

    return 0;
}
