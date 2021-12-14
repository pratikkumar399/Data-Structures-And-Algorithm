#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[] = { 1, 2, 3 , 5, 6, 8 , 9 };
    int size = sizeof(array) / sizeof(array[0]);
    int miss = missing(array, size);
    cout << miss;
}

 
int missing(int a[], int size)
{
 
    int sum = (size + 1) * (size + 2) / 2;
    for (int i = 0; i < size; i++)
        sum -= a[i];
    return sum;
}
 