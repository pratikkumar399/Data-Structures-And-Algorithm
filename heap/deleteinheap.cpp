#include<bits/stdc++.h>
using namespace std ;

void heapify(int arr[] , int n , int i){
    int largest = i ;
    int l = 2*i + 1 ;
    int r = 2*i + 2 ;

    if(l<n && arr[l] >  arr[largest]){
        largest = l ;
    }

    if(r< n && arr[r] > arr[largest]){
        largest = r ;
    }

    if(largest!= i ){
        swap(arr[i] ,arr[largest]) ;

        heapify(arr,n,largest);
    }
}

void deleteRoot(int arr[], int& n){

    // get the last element
    int lastElement = arr[n-1] ;

    arr[0] = lastElement ; // replace the root with the last lastElement

    n = n-1 ;
    heapify(arr, n , 0) ;
}

void printRoot(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
      /* code */
      cout<<arr[i] <<" "<<endl;
  }
  
}


int main(){
    array<int ,5> arr= {10, 5, 3,2,4} ;

    int n = arr.size() ;

    return 0;
}