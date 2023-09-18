// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

//  problem statement :  given two arrays with some common element, we have to find the elements that are not common in both of them
//  arr1 = {1,2,3,4,5,6,7,8,9,10}
//  arr2 = {2,4,6,8,10,12,14,16,18,20}

// approach : the basic approach can be that we can traverse through both the arrays and check if the element is present in the other array or not, but this will take O(n^2) time complexity   (n is the size of the array)

/* जय भवानी । हर हर महादेव। */
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // lets use set to find the required answer

    set<int> st1(arr1.begin(), arr1.end());
    set<int> st2(arr2.begin(), arr2.end());

    int count = 0;
    vector<int> ans;
    for (auto it : st1)
    {
        if (!st2.count(it))
        {
            ans.push_back(it);
        }
    }

    for (auto it : st2)
    {
        if (!st1.count(it))
        {
            ans.push_back(it);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}