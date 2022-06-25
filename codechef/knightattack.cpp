#include <iostream>
using namespace std;

int testcases, x1, x2, y1, y2;

// Returns true if a knight in (x4, y4) attacks the cell (x3, y3)
bool doesAttack(int x3, int y3, int x4, int y4)
{
    if ((abs(x3 - x4) == 1) && (abs(y3 - y4) == 2))
        return true;
    if ((abs(x3 - x4) == 2) && (abs(y3 - y4) == 1))
        return true;
    return false;
}

int main()
{

    cin >> testcases;

    while (testcases--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        int found = 0;
        for (int i = 1; i <= 8; i++)
        {
            if (found == 1)
                break;
            for (int j = 1; j <= 8; j++)
            {
                if (((i == x1) && (j == y1)) || ((i == x2) && (j == y2)))
                    continue;

                // (i, j) is now a cell where we can place the knight.

                if (doesAttack(x1, y1, i, j) && doesAttack(x2, y2, i, j))
                {
                    found = 1;
                    break;
                }
            }
        }

        if (found == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
