#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

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
        b /= 2; // right shifthing  b by 1
    }
    return res;
}

int main()
{
    cout << powr(2, 10) << endl;
    return 0;
}