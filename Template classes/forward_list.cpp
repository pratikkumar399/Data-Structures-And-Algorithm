#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l = {10, 20, 30}; // forward list is implemented as singly linked list while list is implemented as  doubly  linked list

    // we cannot move backwards in forward list , while this can be done using list ;
    l.push_front(4);
    l.push_front(5);
    l.pop_front();
    l.assign({10, 20, 30, 10}); // assigns a list of values
    l.remove(10);               // removes all the instances of the element

    for (int i : l)
    {
        cout << i << " " << endl;
    }
    return 0;
}