#include <iostream>
using namespace std;
long long ap(long long n, long long r)
{
    long long p = 1, a = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        a = a + r;
        p = p * r;
    }
    if (p % a == 0)
        return 1;
    else
        return 0;
}

int main()
{
    long long n, r, c, x = 0;
    cin >> n;
    long long A[n], B[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    for (long long j = 0; j < n; j++)
    {
        c = 0;
        while (A[j] <= B[j])
        {
            r = ap(A[j], r);
            if (r == 1)
                c++;
            A[j] = A[j] + 1;
        }
        cout << "Case #" << j + 1 << ": " << c << "\n";
    }
    return 0;
}