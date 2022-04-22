#include <bits/stdc++.h>
using namespace std;

bool printSum(int index, int arr[], int sum, vector<int> &ans, int n, int k)
{
    // int sum = 0;
    if (index == n)
    {
        // condition satisfied
        if (k == sum)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
            return false;
    }

    // pickinf the elements for adding in the subsequence
    ans.push_back(arr[index]);
    sum += arr[index];
    if (printSum(index + 1, arr, sum, ans, n, k) == true)
        return true;
    sum -= arr[index];
    ans.pop_back();

    // not picking the elements
    if (printSum(index + 1, arr, sum, ans, n, k) == true)
        return true;

    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 2;
    vector<int> ans;
    printSum(0, arr, 0, ans, n, k);

    return 0;
}