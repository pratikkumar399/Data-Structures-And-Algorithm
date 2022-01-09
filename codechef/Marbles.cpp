#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    // Make the list of vowels
    string str = "aeiouAEIOU";
    if((str.find(ch) != string::npos))
    {
        return true ;
    }
    else return false ;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, p;
        cin >> s >> p;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'u';
            }
            else if (p[i] == '?')
            {
                p[i] = 'u';
            }
        }
        int count = 0 ;
        for(int i = 0 ; i< n ;i++){
            if(s[i] !=  p[i] && s[i] == isVowel(s[i]) && p[i] != isVowel(p[i])){
                p[i] =s[i] ;
                count++ ;
            }
            else if(s[i] == isVowel(s[i]) && p[i] == isVowel(p[i]) && s[i] != p[i]){
              
                p[i] = 'k' ;
                count ++ ;
            }
            else if(s[i] == p[i]){
                continue ;
            }
            else if(s[i] !=  p[i] && s[i] != isVowel(s[i]) && p[i] == isVowel(p[i])){
                p[i] = s[i] ;
                count++ ;
            }
            else if(s[i] != isVowel(s[i]) && p[i] != isVowel(p[i]) && s[i] != p[i]){
           
                p[i] = 'u' ;
                count ++ ;
            }
        }
        cout<<count<<endl  ;
    }

    return 0;
}