// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    // What are vectors?
    // -> vectors are dynamic arrays that can grow and shrink in size, according to the input from the user

    // syntax
    vector<int> v1;    // empty vector of integers
    vector<int> v2(5); // vector of 5 characters  // 0 0 0 0 0

    // cout << *(v2.begin());

    // iterator is nothing but a pointer that points to the first element of the vector or any other container class
    // for (auto it = v2.begin(); it != v2.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // for each loop
    // for (auto it : v2)
    // {
    //     cout << it << " ";
    // }

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v1.push_back(x);
    // }

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(4);

    v1.emplace_back(5);

    // for (auto it : v1)
    // {
    //     cout << it << " ";
    // }
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;

    // cout << v1[6] << " " << v1.at(4) << endl;

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1.at(i) << " ";
    // }

    // copy one vector to another
    vector<int> v3(v1);

    // sort the vector
    // sort(v1.begin(), v1.end());

    // sort in normal array
    // int arr[5] = {1, 2, 3, 4, 5};
    // sort(arr, arr + 5);

    // reverse the vector
    // reverse(v1.begin(), v1.end());

    // swap elements of a vector
    // swap(v1[0], v1[3]);

    // sum of vector

    int sum = accumulate(v1.begin(), v1.end(), 0);

    // cout << sum << endl;

    // remove elements from a vector
    v1.pop_back();

    // max element of vector
    int maxi = *max_element(v1.begin(), v1.end());
    int mini = *min_element(v1.begin(), v1.end());

    // cout << maxi << " " << mini << endl;

    // remove specific element from a vector
    v1.erase(v1.begin() + 1);
    // insert at specific position
    v1.insert(v1.begin() + 1, 10);

    for (auto it : v1)
    {
        cout << it << " ";
    }

    return 0;
}