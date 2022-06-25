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

        int arr[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }

        int row = 0;
        int column = 0;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i - 1 >= 0 && j - 1 >= 0 && i + 1 < 8 && j + 1 < 8)
                {
                    if (arr[i][j] == '#' && arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#')
                    {
                        row = i + 1;
                        column = j + 1;
                        cout << row << " " << column << endl;
                        break;
                    }
                }
                if (row != 0 && column != 0)
                {
                    break;
                }
            }
        }
    }

    return 0;
}