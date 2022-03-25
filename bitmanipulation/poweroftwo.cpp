#include <bits/stdc++.h>
using namespace std;

 bool isPowerOfTwo_1(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }

bool isPowerOfTwo(int x)
{
    if (x == 0)
    {
        return false;
    }
    else{
        while(x%2 == 0){
            x /= 2;
        }
        return (x ==1) ;
    }

    // time complexity is O(logN)
}

int main()
{
    int number;
    cin >> number;
    cout<< isPowerOfTwo(number)<<endl;
    cout<< isPowerOfTwo_1(number)<<endl;

    return 0;
}