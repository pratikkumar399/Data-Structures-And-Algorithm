#include <iostream>
using namespace std;

#define int long long int
const int mod = 1e9 + 7;

int multiply(int a , int b , int c  ){
    int res = 0 ;
    while(b){
        if(b &1){
            res =  res + a , res %= c ;
        }
        a =  2* a + c ; a %= c ;
        b /= 2  ; // right shifthing  b by 1
    }
        return res ;
}

int powr(int a, int b)
{
    int res = 1;
    // loop until b becomes zero
    while (b)
    {
        if (b & 1)
        {
            res *= a, res %= mod;
        }
        a *= a, a %= mod;
        b /= 2; // right shifthing  b by 1
    }
    return res;
}

int32_t main()
{
    cout << powr(2, 700) << endl;
    cout<<multiply(20,20,1e9+7) ;
    return 0;
}