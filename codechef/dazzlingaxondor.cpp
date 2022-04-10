#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        // int b = 0;
        long long int n;
        cin >> n;
        // checking if the number is divisible by 4(even) , then it will always yield n + 3
        
        // 1000 ^ 0100 = 1100 = 11 or 8 ^ 3 =11 which is (8+3)

        if (n % 4 == 0)
        {

            cout << n + 3 << endl;
        }
        // if it gives a remainder(odd) it will yield the number itself 

        else if (n % 4 == 1)
        {

            cout << n << endl;
        }
        // if not from above cases it will always give 3 according to the explanation
        else
        {

            cout << "3" << endl;
        }
    }

    return 0;
}
