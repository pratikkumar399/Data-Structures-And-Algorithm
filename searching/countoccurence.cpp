#include <bits/stdc++.h>
using namespace std;

int findCount(const vector<int> &A, int B)
{
    // int low = 0;
    // int high = A.size();
    // int count = 0 ;

    // while (low <= high)
    // {
    //     int mid = low + (high - low) / 2;

    //     if(A[mid] == B){
    //         count++ ;
    //         if(A[mid + 1] == A[mid]){
    //             count++; 
                
    //         }
    //         // if(A[0] == A[1] ){
    //         //     count-- ;
    //         // }
    //     }
    //     if (A[mid] < B)
    //     {
    //         low = mid + 1;
    //     }
    //     else
    //     {
    //         high = mid - 1;
    //     }

    // }
    // return count ;

    int flag = 0 ;
    for(int i = 0 ; i <A.size() ; i++){
        if(A[i] == B){
            flag++ ;
        }
    }
    return flag ;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int key;
    cin >> key;

    int ans = findCount(v, key);
    cout << ans;

    return 0;
}