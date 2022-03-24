#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> v =  {2 , 3, 5, 6 ,7} ;
    vector<int> ::iterator it = v.begin() ;

    for(it = v.begin() ; it != v.end() ; it++){
        cout<<(*it)<<endl;
    }

    vector<pair<int,int>> v1 = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it1 ;

    for(it1 = v1.begin() ; it1 != v1.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;

    }

   
    return 0;
}