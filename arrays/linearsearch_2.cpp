#include<bits/stdc++.h>
using namespace std ;

void linearsearch(int arr[] , int n){
int temp = -1 ; 
for (int i = 0; i < 5; i++)
{
    /* code */
    if(arr[i] == n ){
        cout<<"Element found at location : " << i + 1 << endl ;
        temp = 0 ;
        break;
    }
}
if(temp == -1 ){
    cout<< "No element found" <<endl ;
}

}

int main(){
    int arr[] = {1, 2, 45, 56 , 6}; 
    cout<<" Please enter the number that you want to search : "<<endl;
    int num ;
    cin >> num ;
    linearsearch(arr,num) ;
    return 0;
}