#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long i = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        bool ans = false;

        // 3 6 5  --> n-2 = 1 ,  arr[i] = 6  --> check if 6 is less than 5 and not equal to zero , if greater , decrese it by 6 / 2 

        /* 3 6 5 ;when i = 1 i.e . (n-2)  6 < 5 so arr[i] = 6/ 2 -->  3 3 6 , count++ ,now when i becomes 0 , 3 ==3 (not striclty increasing) , so arr[i] = 3/2 , count++ 
         ||--> arr == 1 3 5 , so count = 2

        */
        
        for (i = n - 2; i >= 0; i--)
        {
            while (arr[i + 1] <= arr[i] && arr[i] != 0)
            {   
                // decrease the array until it is strictly less that its next element
                arr[i] /= 2;
                count++;
            }
        }
        
        // loop till n-1 , so that array doesnt go out of bound when checking for arr[i+i]  and i = n -1 ;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] <= arr[i])
            {
                ans = true;
            }
        }

        if (ans)
        {
            cout << -1 << endl;
        }
        else
            cout << count << endl;
    }

    return 0;
}
