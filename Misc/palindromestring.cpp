#include <iostream>
using namespace std;

bool function(int i, string s)
{
    if (i >= s.length() / 2)
    {
        return true;
    }

    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    else
    {
        return function(i + 1, s);
    }
}

int main()
{
    string s = "madam";
    cout << function(0, s) << endl;

    return 0;
}