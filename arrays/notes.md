```txt

array is a data structure that contains elements in continuous memory blocks 

declaration
arr[] = {1 ,  2 , 3 , 4 ,5 } ;

declaration type 2

arr[5] = {1 , 2 , 3 , 4 , 5} ;




disadvantages of array 
> static 
    size is fixed 
> insertion operation is costly
 you declare an array of size 10 


INSERTION 
 case 1 : insertion in middle 
 1 2 3 4 5 =>  1 2 3 _ 4 5 

 case 2 :  insertion in front
 1 2 3 4 5 =>  _ 1 2 3 4 5 

 case 3 : insertion in back
  1 2 3  4 5 => 1 2 3 4 5 _

DELETION 

 case 1 : deletion in middle
 1 2 3 4 5 =>  1 2 4 5

 case 2 : deletion in front
 1 2 3 4 5 => 2 3 4 5

 case 3 : deletion in back(easiest operation)
 1 2 3 4 5 => 1 2 3 4

 if we are trying to insert in an array and it has limited size then it will throw an  
 error =>  arrayoutofbound 

```



```cpp

#include <bits/stdc++.h>
using namespace std;

int Insertion(int array[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {  

        // overflow condition
        return -1;
    }
    //  1 2 3 4 =>  45 1 2 3 4 => arr[1] = arr[0]
    
    //  1 2 3 4 =>  1 2 3 45 4  index = 3 :  i >= 3 
    // arr[3] i == 3 
    for (int i = size - 1; i >= index; i--)
    {   
        //  arr[4] = arr[3] 
        array[i + 1] = array[i];
    }
    array[index] = element;
    return 1;
}
void a_delete(int arr[], int size, int pos)
{
    if(size== 0){
        // underflow
        return -1 ;
    }
    // 1 2 3 4=>  1 2 3 4
    // 0 1 2 3 
    pos--;
    // arr[-1] = arr[0] 
    for (int i = pos; i < size; i++)
    {   //  arr[2] = arr[3]
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void display(int arr[], int n)
{

  // function to display an array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[100] = {1, 2, 3, 4};
    int size = 4;
    int element = 45;

    display(array, size);
    Insertion(array, size, element, 100, 0);
    size += 1;
    display(array, size);
    a_delete(array, size, 0);

    return 0;
}



```