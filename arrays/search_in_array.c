#include <stdio.h>
int main()
{
    int a[10], num, i;

    printf("Enter the list of numbers\n");
    for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
    printf("Enter the number that you want to search ");
    scanf("%d", &num);
    int found = 0;

    for (i = 0; i < 10; i++)
    {
        if (a[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number Found at index %d\n" ,i);
    else
        printf("Number is not present in the given array of numbers\n");

    return 0;
}