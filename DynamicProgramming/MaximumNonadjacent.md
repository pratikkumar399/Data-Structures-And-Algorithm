[Maximum Sum of Non Adjacent elements](https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0)

```cpp
#include <bits/stdc++.h> 

//momoization  
// => TC = O(n) Space compelxity =  O(n) | recursion takes aux space 
int f(int n  , vector<int> &nums , vector<int> &dp){
    if(n == 0) return nums[n] ;
    if(n < 0) return 0 ;
    
    if(dp[n] != -1) return dp[n] ;
    //picking the element 
    int take = nums[n] + f(n-2 , nums , dp) ;
    // not picking the first element so we will take the second element
    int notTake = 0+ f(n-1 , nums,dp); 
    return dp[n] = max(take , notTake) ;
} 
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size() ;
    vector<int>  dp(n,-1) ;
    return f(n -1, nums ,dp) ;
    
 }
```