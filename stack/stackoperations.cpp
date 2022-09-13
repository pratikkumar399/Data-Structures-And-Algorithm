#include <bits/stdc++.h>
using namespace std;
void PrintStack(stack<int> stk)
{
    stack<int> temp = stk;
    cout << "Stack : ";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> stk;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        stk.push(temp);
    }
    PrintStack(stk);
    stk.pop();
    stk.pop();
    PrintStack(stk);
    if (stk.empty())
    {
        cout << "Stack is empty" << endl;
    }
    if (stk.size() == SIZE_MAX)
        cout << "Stack is Full" << endl;
    return 0;
}
