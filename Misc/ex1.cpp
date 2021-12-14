#include "ex.cpp"
using namespace std;
int main()
{
    ex<int> e;
    int m, n, i, d;
    cout << "Enter the number of people";
    cin >> n;
    cout << "Enter the number of passes";
    cin >> m;
    for (i = 1; i <= n; i++)
        e.enqueue(i);
    cout << "The players are ";
            e.print();
    cout << "Eliminated in order";
        while (n > 1)
    {
        for (i = 1; i <= m; i++)
            e.move_next();
        d = e.dequeue();
        cout << d << endl;
        n--;
    }
    d = e.dequeue();
    cout << "Winning player:	" << d << endl;
    return 0 ;
}
