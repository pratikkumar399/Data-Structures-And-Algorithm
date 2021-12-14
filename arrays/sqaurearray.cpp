#include <iostream>
using namespace std ;


void square(int []);
int main()
{
    int array[] = {2,4,6,8,10};

    square(array);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<array[i] <<endl ;
    }
    

}

void square(int array[])
{
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i< size; i++)
        array[i] *= array[i];
}