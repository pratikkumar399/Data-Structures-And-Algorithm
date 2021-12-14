#include <stdio.h>

int main()
{

    int array[50], position, index , n, insertion_value;

    printf("no of elements : ");
    scanf("%d", &n);
    // printing the array
    printf("Enter %d elements", n);
    for (index = 0; index < n; index++)
        scanf("%d", &array[index]);

    printf("enter position");
    scanf("%d", &position);

    printf("What do you want to insert ? :  ");
    scanf("%d", &insertion_value);

    for (index = n - 1; index >= position - 1; index--)
        array[index + 1] = array[index];

    array[position - 1] = insertion_value; //

    printf("The required array is  ");

    for (index = 0; index <= n; index++)
        printf("%d  ", array[index]);

    return 0;
}