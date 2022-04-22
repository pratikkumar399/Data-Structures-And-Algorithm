#include <bits/stdc++.h>
using namespace std;

void printS(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << "{" << it << "}";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout << "\n";
        return;
    }
    // picking the elements for the subseqence
    ds.push_back(arr[index]);
    printS(index + 1, ds, arr, n);
    ds.pop_back();

    // not take or not picking the elements for the subdequence
    printS(index + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    vector<int> ds;
    int n = 3;

    printS(0, ds, arr, n);

    return 0;
}