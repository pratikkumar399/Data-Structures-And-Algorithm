
#include <bits/stdc++.h>
using namespace std;
 

void rvereseArray(int arr[], int first, int end)
{
    while (first < end)
    {
        int temp = arr[first];
        arr[first] = arr[end];
        arr[end] = temp;
        first++;
        end--;
    }
}    
 

void display(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    display(arr, n);
     
    
    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    
    display(arr, n);
     
    return 0;
}