#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    set<char> st;
    st.insert(str.begin() ,str.end()) ;
    int ans =  st.size();

    if( ans % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl ;
    }
    else{
        cout<<"IGNORE HIM!"<<endl ;
    }
    return 0;
}
