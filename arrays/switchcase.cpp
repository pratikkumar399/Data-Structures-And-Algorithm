#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int LA[50], position, index, k;
    cout << " Enter the size of the array: ";
    cin >> n;

    int  i;

    cout << "Enter number of elements : \n";
    for (i = 0; i < n; i++)
    {
        cin >> LA[i];
    }

    int cases = 1;

    switch (cases)
    {
    case 1:
        cout << "\nElements before deletion\n";
        for (i = 0; i < n; i++)
        {
            cout << LA[i] << "  ";
        }

        cout << "\n index to be deleted : ";
        cin >> index;

        --index;
        for (i = index; i <= 9; i++)
        {
            LA[i] = LA[i + 1];
        }

        cout << "Elements after deletion are : \n";
        for (i = 0; i < n - 1; i++)
        {
            cout << LA[i] << "  ";
        }
        break;

    case 2:

        printf("enter position : ");
        scanf("%d", &position);

        printf("What do you want to insert ? :  ");
        scanf("%d", &k);

        for (index = n - 1; index >= position - 1; index--)
            LA[index + 1] = LA[index];

        LA[position - 1] = k; //

        printf("The required array is  ");

        for (index = 0; index <= n; index++)
            printf("%d  ", LA[index]);
    



    default:
        break;
    }
    return 0;
}