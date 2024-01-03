// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{

    vector<int> arr = {1, 2, 3, 4, 4, 5, 1};
    //  1 3 7 11 15 20 21
    int i = 0;
    int j = arr.size() - 1;
    int sum1 = 0, sum2 = 0;
    while (i < j)
    {
        sum1 += arr[i];
        sum2 += arr[j];
        i++;
        j--;
    }

    cout << sum1 << " " << sum2 << endl;
    return 0;
}

// 1 2 3 4 5 6 7 8 9