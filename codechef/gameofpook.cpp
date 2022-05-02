#include <iostream>
using namespace std;

void notYou()
{
    long long number;
    cin >> number;

    // if the side number is 1 simply the number of the pook will be 2
    if (number == 1)
    {
        cout << "1" << endl;
    }
    // if the number is 2 or 3 there is only one posibiltiy  number -3 
    else if (number == 3 || number == 2)
    {
        cout << number - 1 << endl;
    }
    // print the number as it is 
    else
        cout << number << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}