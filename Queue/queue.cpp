#include <bits/stdc++.h>
using namespace std;

int front = 0;
int rear = 0;
void enqueue(int arr[], int val, int n)
{

    if (rear == n)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        arr[rear] = val;
        cout<<arr[rear] <<endl; 
        rear++;
    }
}


void dequeue(int arr[])
{
    if (front == rear)
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "Dequed element is : " << arr[front]<<endl ;
        front++;
    }
}

int main()
{
    int size = 3;
    int arr[size];
    enqueue(arr, 10, size);
    enqueue(arr, 40, size);
    enqueue(arr, 50, size);
    dequeue(arr);
    
    // enqueue(arr, 20, size);

    return 0;
}