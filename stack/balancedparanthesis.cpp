#include <bits/stdc++.h>
using namespace std;
int top = -1;
void check(char str[], int n, stack<char> s)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            top = top + 1;
            s.push('(');
        }
        if (str[i] == ')')
        {
            if (top == -1)
            {
                top = top - 1;
                break;
            }
            else
            {
                top--;
            }
        }
    }
    if (top == -1)
    {
        cout << "String is balanced" << endl;
    }
    else
    {
        cout << "String is unbalaced" << endl;
    }
}

int main()
{
    // balanced parenthesis string.
    char str[] = {'(', 'a', '+', '(', 'b', '-', 'c', ')', ')'};

    // unbalanced string .
    char str1[] = {'(', '(', 'a', '+', 'b', ')'};
    stack<char> s;
    top = -1;
    check(str, 9, s); // Passing balanced string
    top = -1;
    check(str1, 5, s); // Passing unbalanced string
    return 0;
}