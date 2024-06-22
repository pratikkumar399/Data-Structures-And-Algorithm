// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

/*
* Find maximum subarray sum of size k

-> arr[5] = {1 ,2, 3,4,5};
-> window sizw => k
*/

int maximumSubarraySum(int arr[], int size, int k)
{

    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (i >= k - 1)
        {
            maxSum = max(maxSum, sum);
            sum -= arr[i - (k - 1)];
        }
    }

    return maxSum;
}


int minimumSumWindowSize(int arr[] , int size , int targetSum){
        
}


int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << maximumSubarraySum(arr, size, k);

    return 0;
}