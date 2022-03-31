#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(arr, arr + n);
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
        ++counter;
        if (sum2 > (sum-sum2))
        {
            break;
        }
    }

    cout << counter;

    return 0;
}