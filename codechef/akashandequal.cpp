#include <bits/stdc++.h>
using namespace std;

void notYou()
{
    long long n, i;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    long double mean;
    long double not_mean;
    map<long long, long long> m;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        m[arr[i]]++;
    }
    mean = (double)sum / n;                           // 1+3+5+7 = 16 /4 = 4 is the mean
    not_mean = (double)(mean) *(n - 2);          // 16/2 -->  8 now we need to find elements with sum 8 , rest 2 elements will be removed
    long double target = (double)(sum - not_mean) ; // 16 -8  --> 8 is the target which will give the elements
    long long result = 0;

    for (i = 0; i < n; i++)
    {
        long long rem = (target - arr[i]);
        if (rem + arr[i] == target)
        {
            if (rem == arr[i] && m[rem] > 0)
            {
                result += m[rem];
                result--;
            }
            else
            {
                result += m[rem];
            }
        }
    }
    cout << result / 2 << endl;
    // 1 3 5 7
    //  now 8 -1 =  7 , 8-3 = 5 8-5 =  3 , 8-1 = 7
    // 1 1 1 1 1 1 sum = 6  , mean =  6 , 6 / 4 =  1.5  , therefore 6 -1.5 = 4.5 -> coverting to int gives 5 - 1 =   4 , 4 -1 = 3 , 3 -1 = 2 , 2 -1 = 1 . total sum =  15 
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}