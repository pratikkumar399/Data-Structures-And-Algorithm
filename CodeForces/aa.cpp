// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{

    // we need to print all the possible moves from the given position of a rook

    string moves = "abcdefgh";
    string nums = "12345678";
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        char a = str[0];
        char b = str[1];

        for (int i = 0; i < 8; i++)
        {
            // print the possible moves in the same row
            if (moves[i] != a)
            {
                cout << moves[i] << b << endl;
            }
            // print the possible moves in the same column
            if (nums[i] != b)
            {
                cout << a << nums[i] << endl;
            }
        }
    }

    return 0;
}