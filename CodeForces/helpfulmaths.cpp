#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+')
        {
            count++;
        }
    }
    int count2 =str.size() -count ;
    str.erase(0, count);
    
    

    for (int i = 0; i <  count2; i++)
    {   
        if( i == count2 -1){
             cout<<str[i]<<endl;
        }
        else{
            cout<<str[i] << "+" ;
        }
        
    
    }
   
       
    return 0;
}