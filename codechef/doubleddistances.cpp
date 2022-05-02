#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define endl "\n"
#define int long long

bool flag;
void notYou()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    for (int i = 1; i < n - 1; i++)
    {

        if ((array[i] - array[i - 1]) == 2 * (array[i + 1] - array[i]))
        {
            flag = true;
        }
        else if ((2 * (array[i] - array[i - 1])) == (array[i + 1] - array[i]))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}