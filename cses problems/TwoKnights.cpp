#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
        int a[t][3];

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        int ans1 = 0, ans2 = 0, ans3 = 0;

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ans1 += a[i][0];
                ans2 += a[i][1];
                ans3 += a[i][2];
            }
        }

        if (ans1==0 && ans2== 0 && ans3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        return 0;
    
}


// Another code

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//         int ans1 = 0, ans2 = 0, ans3 = 0;
//     while (t--)
//     {
//         int x , y, z ;
//         cin >> x >> y >> z ;
//         ans1 += x ;
//         ans2 += y ;
//         ans3 += z ;
//     }
//         if (ans1==0 && ans2== 0 && ans3 == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }

//         return 0;
    
// }