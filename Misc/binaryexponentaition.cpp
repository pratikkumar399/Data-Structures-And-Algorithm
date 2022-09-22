#include <iostream>
using namespace std;

//recursive function to calculate a^b
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main() {
	
	//the exponent to be calculated
	long long a = 3 , b = 4;
	
	//output the answer
	cout<<"3 raised to the power 4 is : "<<binpow(a,b)<<endl;
	
	return 0;
}
