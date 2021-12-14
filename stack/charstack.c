#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 5
int push(char stack[max][80], int *top, char data[80])
{
    if (*top == max - 1)
        return (-1);
    else
    {
        *top = *top + 1;
        strcpy(stack[*top], data);
        return (1);
    }
}

int main()
{
    char stack[max][80], nm[80];
    int top, ch, reply;
    top = -1; // Initialize Stack

    printf("\nEnter string : ");
    scanf("%s", nm);
    reply = push(stack, &top, nm);
    if (reply == -1)
        printf("\n Stack is Full.\n");
    else
        printf("'%s' is Pushed in Stack.\n\n", nm);
    return 0;
}