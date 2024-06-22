#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *S;
};
void create( Stack *st)
{
    cout << "Enter Size ";
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}
void Display( Stack st)
{
    int i;
    for (i = 0; i <= st.top; i++)
        cout << st.S[i] << " ";
    cout << endl;
}
void push( Stack *st, int x)
{

    if (st->top == st->size - 1)
        cout << "Stack overflow" << endl;
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop( Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "Stack Underflow" << endl;
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int main()
{
    Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    Display(st);
    cout << pop(&st);
    return 0;
}