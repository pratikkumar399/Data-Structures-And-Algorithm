#include <bits/stdc++.h>
using namespace std ;
struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
        cout<<"Stack is Full" <<endl ;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
       cout<<"Stack is Empty"<<endl;
    else
    {
        t = top;

        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        cout<< p->data<< " ";
        p = p->next;
    }
    printf("\n");
}

int main()
{
    push(5);
    push(10);
    push(90);
    Display();
    cout<<pop()<<endl;
    return 0;
}