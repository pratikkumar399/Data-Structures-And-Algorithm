#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[10] = {0, 1, 2, 4, 4, 5, 6};
    auto k = lower_bound(array, array + 10, 4) - array;

    if (k < 10 && array[k] == 4)
    {
        cout << "the element is found at index number " << k << endl;
    }
    else
    {
        cout << "The element is not found at the given index ";
    }

    auto a = lower_bound(array, array + 10, 4);
    auto b = upper_bound(array, array + 10, 4);
    cout << b - a << endl;

    //    using equal range thhe code becomes shorter
    auto r = equal_range(array, array + 10, 4);
    cout<<r.second-  r.first << endl;
    return 0;
}