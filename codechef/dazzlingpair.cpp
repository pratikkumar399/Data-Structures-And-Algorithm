#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        // check if a is an even number
        if (a % 2 == 0)
        {
            // if even and in range then print multiples of 2 --> 2 4
            if (a + 2 <= b)
            {
                cout << a << " " << a + 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a % 3 == 0)
        {
            // find next multiple of 3 --> 3 6  {3, 7 => 7 > 3+3 => 3, 6 is the answer }
            if (a + 3 <= b)
            {
                cout << a << " " << a + 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        // if a is not divisible by both 2 and 3 then check if there is a gap of more than 3 between the elements
        // if a number is not divisble by 2 then it is odd(and %3 != 0) and therefore its next number will be even
        // so check if there is gap of three between the elements so that two multiples of 2 can be found between them
        // if not then print -1
        else
        {
            if (a + 3 <= b)
            {
                cout << a + 1 << " " << a + 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}