// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int dpSolution(vector<int> &nums)
{
    vector<int> dp(nums.size());
    // this is because we always consier the first element of the array as the max sum
    dp[0] = nums[0];
    // now lets calculate the overall sum
    for (int i = 0; i < nums.size(); i++)
    {
        // the state of the dp is that we have to find the max till current and therefore we can have
        // our desired result
        // one way to do is that we can extract the dp from the previous state
        // and then add the current element and then we can compare with the current element
        // this works because in the dp state we are storing the max sum till the previous element
        dp[i] = max(dp[i - 1] + nums[i], nums[i]);
    }

    return *max_element(dp.begin(), dp.end());
}

int maximumSubarray(vector<int> &nums)
{
    int size = nums.size();
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // sum = max(sum + nums[i], nums[i]);
        sum = max(nums[i], sum + nums[i]);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &it : nums)
        cin >> it;

    cout << maximumSubarray(nums) << endl;

    return 0;
}