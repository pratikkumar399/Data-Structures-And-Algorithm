#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc";  //t.c -> O(log n)
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "hello"});
    print(m) ;

    return 0;
}