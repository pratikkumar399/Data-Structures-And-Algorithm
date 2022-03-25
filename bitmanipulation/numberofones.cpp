#include <bits/stdc++.h>
using namespace std;

// Count the number of ones in the binary representation of the given number.
// The basic approach to evaluate the binary form of a number is to traverse on it and count the number of ones. But this approach takes log2N of time in every case.

// Why log2N ?
// As to get a number in its binary form, we have to divide it by 2, until it gets 0, which will take log2N of time.

// With bitwise operations, we can use an algorithm whose running time depends on the number of ones present in the binary form of the given number. This algorithm is much better, as it will reach to logN, only in its worst case.

int count_one(int n)
{
    int count = 0;

    while (n)
    {
        n = n & (n - 1);   
        // and(&) operation on n and n-1 reduces the number of one each times and thus we can easily count the number of bits , incrementing the counter each time the operation takes place 
        count++;
    }
    return count;
}

int main()
{
    int x = 7;
    cout << (count_one(x)) << "\n";
    return 0;
}