#include<bits/stdc++.h>
using namespace std ;

// Check if the ith bit is set in the binary form of the given number.

// To check if the ith bit is set or not (1 or not), we can use AND operator. How?

// Let’s say we have a number N, and to check whether it’s ith bit is set or not, we can AND it with the number 2i . The binary form of 2i contains only ith bit as set (or 1), else every bit is 0 there. When we will AND it with N, and if the ith bit of N is set, then it will return a non zero number (2i to be specific), else 0 will be returned.

// Using Left shift operator, we can write 2i as 1 << i .

bool ith_bit(int n,int i){
    if(n & (1<<i)){
        return true ;
    }
    else{
        return false ;
    }
}

int main(){
    int n = 20 , i = 2 ;
    cout<<ith_bit(n,i)<<endl;
    return 0;
}