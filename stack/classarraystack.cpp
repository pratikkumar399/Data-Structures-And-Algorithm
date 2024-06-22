#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

class Stack
{
    int top;

public:
    int arr[MAX];

    bool push(int x);
    int pop();
    bool isempty();
};

bool Stack ::push(int x)
{
    if (top > MAX)
    {
        cout << "Stack overflow" << endl;
        return false;
    }
    else
    {
        arr[++top] = x;
        cout << "Pushed into the stack" << endl;
        return true;
    }
}

int Stack ::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow" << endl;
        return 0;
    }
    else
    {

        int x = arr[top--];
        return x;
    }
}

int main()
{
    Stack s;

    s.push(20);
    s.push(30);
    s.push(40);
 
    cout << s.pop() << " ";
    return 0;
}