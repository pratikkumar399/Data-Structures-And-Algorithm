#include <iostream>
using namespace std;

void byte_dock()
{
    int x, y;
    cin >> x >> y;
    // need to print any one of the answer out of the multiple ones  , so if both numbers arent factors of each other just print(0,0)
    if (y % x != 0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        cout << 1 << " " << y / x << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        byte_dock();
    }

    return 0;
}