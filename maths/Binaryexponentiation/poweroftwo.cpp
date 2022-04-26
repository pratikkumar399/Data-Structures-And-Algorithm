#include <iostream>
using namespace std;

int powrl(int a , int b){
    if(b == 0){
        return 1 ;
    }
    int res = powrl(a , b/2) ;
    if(b&1 == 0) return res* res * a ;  
    else{
        return res * res ;
    }  
}

int powr(int a, int b)
{
    int res = 1;
    // loop until b becomes zero
    while (b)
    {
        if (b & 1)
        {
            res *= a;
        }
        a *= a;
        b /= 2;  // right shifthing  b by 1 
    }
    return res;
}

int main()
{
    cout << powr(2, 10) << endl;
    return 0;
}