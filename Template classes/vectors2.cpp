// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif

    vector<int> vec = {1, 2, 3, 4, 4, 45, 7, 7};
    // auto keyword =>  detects the datatype automatically

    // sort
    sort(vec.begin(), vec.end());

    // // reverse
    reverse(vec.begin(), vec.end());

    // accumulate
    accumulate(vec.begin(), vec.end(), 0);
    // there is an initial sum values which is neeeded to be given

    // for finding size
    int size = vec.size();

    // for inserting an element
    vec.push_back(size);

    // for removing last element
    vec.pop_back();

    // for clearing all the elements in  vector
    vec.clear();

    auto it = vec.front();
    auto it1 = vec.back();

    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }

    for (auto it : vec)
    {
        cout << it;
    }

    // cout << it << " " << vec[size - 1] << endl;

    // to find maximum element in a vector
    // this returns the largest element
    int maxi = *max_element(vec.begin(), vec.end());
    // this returns iterator to largest element
    auto maxi2 = max(vec.begin(), vec.end());
    cout << maxi;
    cout << *maxi2;

    // to find minimum element in a vector

    // this return minimum element in a vector
    auto mini = *min_element(vec.begin(), vec.end());
    // this returns iterator to minimum element
    auto mini2 = min(vec.begin(), vec.end());

    return 0;
}