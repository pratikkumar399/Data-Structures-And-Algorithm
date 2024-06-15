//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std ;

/* जय भवानी । हर हर महादेव। */

void f(int n){
    if(n ==  0) return;
    f(n - 1 );
    cout<<n<<endl;
}


 // print sum of first 4 natural numbers   1 + 2 +3 +4 -> 
int main(){
    int n;
    cin >> n;
    // print 1 to n 
    // print n to 1 
    // i + 1 
    f(n);
    return 0;
}