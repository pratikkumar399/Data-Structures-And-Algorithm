#include <bits/stdc++.h>
using namespace std;
void printVect(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // in vectors number of rows are fixed but the number of col v aries
    // we can say that the length of the the vectors vary , and it behaves as  2d vector
    //  so if we want to vary the number of rows then we can use vector of vectors number
    int N;
    cin >> N;
    vector<vector<int>> v;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++){
        printVect(v[i]) ;
    }

    return 0;
}