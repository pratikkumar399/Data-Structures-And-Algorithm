#include <bits/stdc++.h>
using namespace std;

int findFact(int n)
{
    return n == 1 ? 1 : n * (findFact(n - 1));
}

void findPermutations(int a[], int n)
{

    do
    {
        // display(a, n);
        continue;
    } while (next_permutation(a, a + n));
}
int count(int *array, int max)
{
    for (int i = 0; i <=max; ++i)
    {
        array[i] = i + 1;
    }
    return array[max];
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        count(a, n);
        findPermutations(a, n);
        int ans = 0;
        int ans2 = 0;

        for (int i = 1; i <=n; i++)
        {
            ans = a[i] * i;
            ans2 += ans;
        }
        int ans3 = 0;

        int permutation = findFact(n);
        if (ans2 % permutation == 0)
        {
            ans3 = ans2 / permutation;
        }
        else
        {
            ans3 = (ans2 / permutation) % 998244353;
        }
    }

    return 0;
}