#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        long long size = str.size();
        long long sum = 0;
        long long last = int(str[size - 1] - 'a');
        long long first = int(str[0] - 'a');
        long long maximum = first;
        long long difference;

        for (long long i = 0; i < size; i++)
        {
            sum += int(str[i] - 'a') + 1;
        }
        if (size % 2 == 0)
        {
            cout << "Alice"
                 << " " << sum << endl;
        }

        else
        {    
            // finding the sum sount of string till the second last string , because till second last number the string is odd 
            long long evenLength = sum - last - 1;
            // the first char is always of odd parity 
            long long oddLength = sum - first - 1;

            // finding the maximum of even and odd substring 
            maximum = max(oddLength, evenLength);
            // the differnce between maximum of even and odd subtring and the string sum , helps us to find the person who traversed most part of the string  
            difference = sum - maximum;
            if (maximum > difference)
            {
                cout << "Alice"
                     << " " << maximum - difference << endl;
            }
            else
            {
                cout << "Bob"
                     << " " << difference - maximum << endl;
            }
        }
    }

    return 0;
}