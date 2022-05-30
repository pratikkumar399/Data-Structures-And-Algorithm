#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int area;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] < A[j])
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        int count = 0;
        int rect[3];

        for (int i = 0; i < n; i++)
        {
            if (A[i] == A[i + 1])
            {
                count++;
                rect[count] = A[i];
                //
                i++;
            }

            if (count == 2)
            {
                break;
            }
        }

        if (count != 2)
        {
            cout << "-1\n";
        }

        else
        {

            cout << rect[1] * rect[2] << endl;
        }
    }
    return 0;
}