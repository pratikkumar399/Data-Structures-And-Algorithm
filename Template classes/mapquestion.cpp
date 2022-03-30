/*
Given N strings , print uniques strings in lexiographical order with their frequency N<= 10^5 |S| <=100
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        m[str]++;
    }

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}