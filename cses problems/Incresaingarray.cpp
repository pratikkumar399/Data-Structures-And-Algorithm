#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <arr[i - 1])
        {
            while (arr[i] != arr[i - 1])
            {
                arr[i]++;
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}