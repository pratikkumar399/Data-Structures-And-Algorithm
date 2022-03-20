#include <bits/stdc++.h>
using namespace std;
void sortingChar(int numbers[], char b[], int n)
{
    pair<int, char> pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i] = {numbers[i], b[i]};
    }
    sort(pa, pa + n);
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].second << endl;
    }
}



int main()
{
    int numbers[4] = {3, 2, 1, 4};
    char b[4] = {'a', 'b', 'd', 'c'};

    sortingChar(numbers, b, 4);
    return 0;
}