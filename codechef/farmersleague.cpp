#include <iostream>
using namespace std;

void notYou()
{
    int no_of_teams;
    cin >> no_of_teams;
    int total = (no_of_teams - 1) * 3;
    int second = ((no_of_teams - 1) / 2) * 3;
    int maximum = total - second;
    cout << maximum << endl;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}