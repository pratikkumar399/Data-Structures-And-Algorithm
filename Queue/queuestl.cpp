// Cpp code to illustrate Queue ds using stl
#include <bits/stdc++.h>
using namespace std;

using namespace std;

void showq(queue<int> gq)
{

    queue<int> g = gq;
    while (!g.empty())
    {
        cout << " " << g.front();
        g.pop();
    }
    cout << endl;
}




int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout <<"The queue gquizz is :";
    showq(gquiz);

    cout << "\nquiz.size()       : " << gquiz.size();
    cout << "\ngquiz.front()     : " << gquiz.front();
    cout << "\ngquiz.back()      : " << gquiz.back();

    cout << "\nguiz.pop()        :";
    gquiz.pop();
    showq(gquiz);

    return 0;
}