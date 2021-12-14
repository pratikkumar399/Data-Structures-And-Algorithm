#include<bits/stdc++.h>
using namespace std ;
vector<int> removeduplicates(int * a , int size ){
    vector<int> output ;
    unordered_map<int, bool>  seen  ;
    for(int i = 0 ; i < size ; i++){
        if(seen.count(a[i]) > 0  ){
            continue ;
        }
        seen[a[i]] = true ;
        output.push_back(a[i]) ;
    }
    return output ;
}

int main(){
    int a[] = {1,2,3,1,3,4,2,4,4,5 , 7} ;
    vector<int> output  =removeduplicates(a,11);
    for(int i = 0; i < output.size();i++){
        cout<<output[i]<<" " ; 
    }

    return 0;
}