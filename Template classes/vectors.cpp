#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size() --> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
void printStringVect(vector<string> v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size() --> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vectors are dynamic arrays

    vector<int> v;

    vector<int> v1(10, 3); // fill the vector wih 10 3's , by default there will be 10 0's

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printVect(v);
        v.push_back(x); // time complexity is O(1)
    }
    printVect(v);
    v.pop_back(); // pops or removes last element // O(1)
    printVect(v1);

    vector<int> v2 = v; // no changes will reflect in v

    vector<string> vect;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vect.push_back(s);
    }
    printStringVect(vect);

    return 0;
}