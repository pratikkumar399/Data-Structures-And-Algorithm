// CPP program to traverse a map using iterators
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "leetcode";

    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (m[s.at(i)] == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}
