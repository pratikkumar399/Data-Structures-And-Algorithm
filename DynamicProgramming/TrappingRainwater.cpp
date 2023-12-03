// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int trap(vector<int> &height)
{
    if (height.size() <= 2)
        return 0;
    int n = height.size();
    // if there are just two bars then we cannot contain any water

    int left = 0, right = n - 2;
    int leftMax = height[0], rightMax = height[n - 1];
    int ans = 0;
    while (left <= right)
    {
        if (leftMax < rightMax)
        {
            leftMax = max(leftMax, height[left]);
            ans += leftMax - height[left];
            left++;
        }
        else
        {
            rightMax = max(rightMax, height[right]);
            ans += rightMax - height[right];
            right--;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto &it : nums)
    {
        cin >> it;
    }

    cout << trap(nums) << endl;
    return 0;
}