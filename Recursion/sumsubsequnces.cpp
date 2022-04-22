#include <bits/stdc++.h>
using namespace std;

void printSum(int index, int arr[], int sum, vector<int> &ans, int n, int k)
{
    // int sum = 0;
    if (index == n)
    {
        if (k == sum)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // pickinf the elements for adding in the subsequence
    ans.push_back(arr[index]);
    sum += arr[index];
    printSum(index + 1, arr, sum, ans, n, k);
    sum -= arr[index];
    ans.pop_back();

    // not picking the elements
    printSum(index + 1, arr, sum, ans, n, k);
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