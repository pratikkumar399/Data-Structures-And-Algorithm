#include <iostream>

using namespace std;

//elements should be present in sorted order
// in binary search the elements needs to be sorted first 
//we need to do binary search in order to redude the time complexity 
//the reduced time complexity of the algoritm is O(n)  but in case the array is sorted then it takes time equal to O(log n )


int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    //finding the mid element 
    while (s <= e)
    {
        int mid = s + (e-s)/2;
       
       // if the element is found at the mid point then return the number 
        if (arr[mid] == key)
        {
            return mid;
        }

        // if the element is found at other places then return the index at whuch the number is found 
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
           s =  mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout<< "Enter the size of the array : " <<  endl  ;
    cin >> n;

    int arr[n];

    cout<<  "Enter numbers in ascending order : "  << endl ; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    cout<< "Enter the element that you want to search : " << endl ;
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;

    
    return 0;
}