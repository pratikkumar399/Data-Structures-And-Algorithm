#include <iostream>
using namespace std;

int Partition(float arr[], int l, int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qSort(float arr[],int l,int h){
    if(l<h){
        int p=Partition(arr,l,h);

        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}

int main() {

    float arr[] = {2.2, 9.4, 4.2, 19.1, 17.2};

	int n=5;

	qSort(arr,0,n-1);

	for (int i = n-1; i >= 0; i--)
    {
        /* code */
        cout<<arr[i] << " " ;
    }
    
}