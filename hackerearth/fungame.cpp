#include <bits/stdc++.h>
using namespace std;

vector<int> funGame(vector<int> arr)
{
    // Write your code here
    stack<int> ans;
    stack<int> ans1;
    vector<int> uttar;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push(arr[i]);
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        ans1.push(arr[i]);
    }

    while (!ans.empty() && !ans1.empty())
    {
        if (ans.top() > ans1.top())
        {
            uttar.push_back(2);
            ans1.pop();
        }
        else if (ans.top() < ans1.top())
        {
            uttar.push_back(1);
            ans.pop();
        }
        else
        {
            uttar.push_back(0);
            ans1.pop();
            ans.pop();
        }
    }

    return uttar;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i_arr = 0; i_arr < n; i_arr++)
    {
        cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
        cout << " " << out_[i_out_];
    }
}