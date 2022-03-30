#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string str1;

    cin>>str ;
    cin>>str1 ;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);

    int equalOrNot = str.compare(str1);

    if (equalOrNot == 0)
    {
        cout << 0 << endl;
    }
    else if (equalOrNot > 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}