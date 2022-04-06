#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin >> str;
    stack<string> s;
    string ans = "";
    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] == '/')
        {
            s.push(ans);
            ans="";
        }
        else if (str[i] == '\\')
        {
            reverse(ans.begin() ,ans.end());
            string top = s.top();
            s.pop();
            top.append(ans) ;
            ans = top ;
        }
        else{
            ans.push_back(str[i]);
        }
    }
    cout<<ans<<endl;

    return 0;
}